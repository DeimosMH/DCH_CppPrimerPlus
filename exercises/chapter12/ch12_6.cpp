// bank.cpp -- using the Queue interface
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include "ch12_5_queue.h"

const int MIN_PER_HR = 60;
bool newcustomer(double x); // is there a new customer?
double simulation(int qs, int hours, double perhour);

int main()
{
    // hard-coded data for simulation
    int qs = 150;           // rand() % 100 + 1; // size of queue 1 - 100
    int hours = 1000;       // hours of simulation
    double perhour = 10000; // rand() % 10 + 1;  // average # of arrival per hour

    double avgWait{};

    do
    {
        avgWait = simulation(qs, hours, perhour--);
    } while (avgWait > 1);

    std::cout << "\nNumber of customers per hour that leads"
              << " to an average wait time of one minute : "
              << perhour << "\n"
              << "for queue size: " << qs << "; and " << hours << " hours of simulation";

    std::cout << "\n\nDone!\n";
    return 0;
}

double simulation(int qs, int hours, double perhour)
{
    using std::cin;
    using std::cout;
    using std::endl;

    Item temp;          // new customer data
    long turnaways = 0; // turned away by full queue
    long customers = 0; // joined the queue
    long served = 0;    // served during the simulation
    long sum_line = 0;  // cumulative line length
    int wait_time[2]{}; // time until autoteller is free
    long line_wait = 0; // cumulative time in line

    // setting things up
    using std::ios_base;
    std::srand(std::time(0)); //    random initializing of rand()

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    // cout << "Enter maximum size of queue: ";

    // value in the range 1 - 100
    // qs = rand() % 100 + 1;    // cin >> qs;
    cout << "; Max queue for simulation: " << qs;

    Queue line[2]{qs, qs}; // line queue holds up to qs people
    // cout << "Enter the number of simulation hours: ";

    // hours of simulation // cin >> hours; // simulation will run 1 cycle per minute
    cout << "; Simulation hours: " << hours;

    long cyclelimit = MIN_PER_HR * hours; // # of cycles
    // cout << "Enter the average number of customers per hour: ";
    cout << "; Average number of customers per hour: " << perhour << " ";

    // cin >> perhour;

    double min_per_cust; // average time between arrivals
    min_per_cust = MIN_PER_HR / perhour;

    // running the simulation
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust)) // have newcomer
        {
            if (line[0].queuecount() > line[1].queuecount())
            {
                if (line[1].isfull())
                    turnaways++;
                else
                {
                    customers++;
                    temp.set(cycle);
                    // cycle = time of arrival
                    line[1].enqueue(temp); // add newcomer to line
                }
            }
            else
            {
                if (line[0].isfull())
                    turnaways++;
                else
                {
                    customers++;
                    temp.set(cycle);
                    // cycle = time of arrival
                    line[0].enqueue(temp); // add newcomer to line
                }
            }
        }

        if (wait_time[0] <= 0 && !line[0].isempty())
        {
            line[0].dequeue(temp);       // attend next customer
            wait_time[0] = temp.ptime(); // for wait_time minutes
            line_wait += cycle - temp.when();
            served++;
        }

        if (wait_time[1] <= 0 && !line[1].isempty())
        {
            line[1].dequeue(temp);       // attend next customer
            wait_time[1] = temp.ptime(); // for wait_time minutes
            line_wait += cycle - temp.when();
            served++;
        }
        
        if (wait_time[0] > 0)
            wait_time[0]--;
        if (wait_time[1] > 0)
            wait_time[1]--;

        sum_line += line[0].queuecount();
        sum_line += line[1].queuecount();
    }

    // reporting results
    if (customers > 0)
    {
        cout << "customers accepted: " << customers << endl;
        cout << " customers served: " << served << endl;
        cout << "turnaways : " << turnaways << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double)sum_line / cyclelimit << endl;
        cout << " average wait time: "
             << (double)line_wait / served << " minutes\n";
    }
    else
        cout << "No customers!\n";

    return (double)line_wait / served;
}

// x = average time, in minutes, between customers
// return value is true if customer shows up this minute
bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}
