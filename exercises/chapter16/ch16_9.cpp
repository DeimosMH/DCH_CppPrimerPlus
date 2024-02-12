#include <iostream>
#include <list>
#include <vector>
#include <fstream>

#include <chrono>
#include <ctime>

#include <typeinfo>
#include <algorithm>

#define TTHOUSAND 10000
#define HTHOUSAND 100000
#define MILLION 1000000
#define BILLION 1000000000
#define TRYLLION 1000000000000


/// @brief Print data into console
/// @tparam T 
/// @param data STL container ot array
/// @param what_data ID of data that will print 
/// @param num_el Size of data
/// @param duration_micros Time duration that will be printed
template <typename T> // slow
void mass_print(T &data, const char *what_data, size_t num_el, size_t duration_micros = 0)
{
    std::cout << what_data << " data:\n";
    for (size_t i = 0; i < num_el; i++)
    {
        std::cout << data[i] << " ";
        if (!(i % 100))
        {
            std::cout << "\n";
        }
    }
}

template <typename T>
void mass_fwrite(T &data, const char *what_data, const char *fn, size_t num_el, double duration_micros = 0)
{

    std::ofstream outFile;
    {
        std::string merge_fn;
        merge_fn = "./";
        merge_fn += fn;
        merge_fn += ".txt";
        outFile.open(merge_fn);
    }

    if (!outFile.is_open())
    {
        std::cout << "Could not open file" << std::endl;
        std::cout << "Terminate program" << std::endl;
        exit(EXIT_FAILURE);
    }

    if (outFile.good())
    {
        outFile << what_data << " data asigned in: " << duration_micros << " microseconds\n";
        outFile << what_data << " data asigned in: " << duration_micros / 1000.00 << " milliseconds\n";
        outFile << what_data << " data asigned in: " << (long long)duration_micros / 1000.00 / 1000.00 << " seconds\n";
        outFile << what_data << " data asigned in: " << ((long long)duration_micros / 1000.00 / 1000.00) / 60.00 << " minutes\n";
        outFile << what_data << " data asigned in: " << (((long long)duration_micros / 1000.00 / 1000.00) / 60.00) / 60.00 << " hours\n";

        outFile << "\n"
                << what_data << " data:\n";
    }

    // // Not adequate for List
    // for (size_t i = 0; i < num_el; i++)
    // {
    //     if (outFile.good())
    //     {
    //         outFile << data[i] << ",";
    //         if (!(i % 100) && i != 0)
    //         {
    //             outFile << "\n";
    //         }
    //     }
    // }

    // size_t i = 0;
    // Iterate through the list using iterators
    // for (auto it = data.begin(); it != data.end(); ++it, ++i)
    // {
    //     if (outFile.good())
    //     {
    //         outFile << *it << ",";
    //         if (!(i % 100) && i != 0)
    //         {
    //             outFile << "\n";
    //         }
    //     }
    // }

    size_t i = 0;
    for (auto a : data)
    {
        if (outFile.good())
        {
            outFile << a << ",";
            if (!(i % 100) && i != 0)
            {
                outFile << "\n";
            }
            i++;
        }
    }
}

int main()
{
    size_t num_data = MILLION;
    std::vector<int> vi0; // a
    std::vector<int> vi;  // b
    std::list<int> li;    // b

    // a)   ------------------

    // clock_t start = clock(); // ctime - calc time
    auto start = std::chrono::high_resolution_clock::now(); // chrono - more precise (object) timer

    for (size_t i = 0; i < num_data; i++)
    {
        vi0.push_back(rand() % 1000);
    }

    auto stop = std::chrono::high_resolution_clock::now();                                      // Stop the timer
    auto chrono_duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start); // Calculate the duration
    double duration = chrono_duration.count();

    // clock_t end = clock();
    // double duration = (double)(end - start) / CLOCKS_PER_SEC;

    std::cout << "\nVector assignment of " << num_data
              << " points of data into " << typeid(vi0).name() << ": "
              << duration / 1000.00 << " ms";

    // mass_print(vi0, vi0.size(), "Vector");   // slow
    // mass_fwrite(vi0, "Vector", "ch16_9_vector", vi0.size(), duration);

    // b)   ------------------

    vi.assign(vi0.begin(), vi0.end());

    start = std::chrono::high_resolution_clock::now();

    li.assign(vi0.begin(), vi0.end());

    stop = std::chrono::high_resolution_clock::now();
    chrono_duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    duration = chrono_duration.count();

    std::cout << "\nTime to assign " << num_data
              << " points of data from " << typeid(vi0).name()
              << " into " << typeid(li).name() << ": "
              << duration / 1000.00 << " ms";

    // c)   ------------------ VECTOR
    start = std::chrono::high_resolution_clock::now();

    std::sort(vi.begin(), vi.end());

    stop = std::chrono::high_resolution_clock::now();
    chrono_duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    duration = chrono_duration.count();

    std::cout << "\nVector sort of " << num_data
              << " points of data in " << typeid(vi).name() << ": "
              << duration / 1000.00 << " ms";
    // mass_fwrite(vi, "Vector", "ch16_9_vector_sorted", vi.size(), duration);

    // c)   ------------------ LIST
    start = std::chrono::high_resolution_clock::now();

    li.sort();

    stop = std::chrono::high_resolution_clock::now();
    chrono_duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    duration = chrono_duration.count();

    std::cout << "\nList sort of " << num_data
              << " points of data in " << typeid(li).name() << ": "
              << duration / 1000.00 << " ms";
    // mass_fwrite(li, "List", "ch16_9_list_sorted", li.size(), duration);

    // d)   ------------------
    li.assign(vi0.begin(), vi0.end());

    start = std::chrono::high_resolution_clock::now();

    vi.assign(li.begin(), li.end()); // copy list to vector
    std::sort(vi.begin(), vi.end()); // sort vector
    li.assign(vi.begin(), vi.end()); // copy back

    stop = std::chrono::high_resolution_clock::now();
    chrono_duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    duration = chrono_duration.count();

    std::cout << "\nList of " << num_data
              << " points of data, copied to Vector, sorted and copied back to List took: "
              << duration / 1000.00 << " ms";
    // mass_fwrite(li, "List", "ch16_9_task", li.size(), duration);

    return 0;
}

/*
// Listing 5.14 waiting.cpp
// waiting.cpp -- using clock() in a time-delay loop
#include <iostream>
#include <ctime> // describes clock() function, clock_t type
int main()
{
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC; // convert to clock ticks
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay) // wait until time elapses
        ;                           // note the semicolon
    cout << "done \a\n";
    return 0;
}
*/