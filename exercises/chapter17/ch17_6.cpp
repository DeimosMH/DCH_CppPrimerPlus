#include <iostream>
#include <fstream>
#include "ch17_6_emp.h"

using namespace std;

void printMenu();
int countData(ifstream &fin, string fn);
const int MAX = 10; // no more than 10 objects

int main(void)
{
    int classtype{};
    abstr_emp *pc[MAX];
    ifstream fin;
    ofstream fout;
    string fname{"ch17_6_emp.dat"};

    fin.open(fname);
    if (fin.good() && fin.is_open())
    {
        char ch;
        int i{};

        cout << "File found, loading data." << '\n';

        while ((fin >> classtype).get(ch))
        {

            switch (classtype)
            {
            case Employee:
                pc[i] = new employee();
                break;
            case Manager:
                pc[i] = new manager();
                break;
            case Fink:
                pc[i] = new fink();
                break;
            case Highfink:
                pc[i] = new highfink();
                break;
            default:
                cout << "\nErroneous input in file..\n";
                break;
            }

            pc[i]->ReadAll(fin);
            pc[i]->ShowAll();
            i++;

            if (i >= MAX)
            {
                cout << "\nMaximum number of data reached!\n";
                break;
            }
        }

        fin.close();
    }
    else if (!fin.good())
    {
        cout << "File don't exist!" << endl;
    }
    else
    {
        cerr << "Couldn't open file" << '\n';
        exit(EXIT_FAILURE);
    }

    fout.open(fname, ios::out | ios::app);
    if (fout.is_open())
    {
        char ch;
        int i{};
        bool wi{false};
        bool qm{false};
        bool fst_app{false}; // first time appending

        printMenu();

        while ((cin >> classtype).get(ch))
        {
            wi = false;

            if (!fst_app && classtype < 4)
            {
                fst_app = true;
                fout << '\n';
            }
            
            switch (classtype)
            {
            case Employee:
                fout << Employee << endl;
                pc[i] = new employee();
                break;
            case Manager:
                fout << Manager << endl;
                pc[i] = new manager();
                break;
            case Fink:
                fout << Fink << endl;
                pc[i] = new fink();
                break;
            case Highfink:
                fout << Highfink << endl;
                pc[i] = new highfink();
                break;
            case 9:
                cout << "\nBye!\n";
                qm = true;
                break;
            default:
                wi = true;
                cout << "\nWrong input.\n";
                while (cin.get() != '\n')
                {
                    continue;
                }
                break;
            }

            if (qm)
            {
                break;
            }

            if (!wi)
            {
               
                pc[i]->SetAll();
                pc[i]->WriteAll(fout);
                pc[i]->ShowAll();
                i++;

                if (i >= MAX)
                {
                    cout << "\nMaximum number of data reached!\n";
                    break;
                }
            }
            printMenu();
        }

        fout.close();
    }
    else
    {
        cerr << "Couldn't open/make file" << '\n';
        exit(EXIT_FAILURE);
    }

    countData(fin, fname);

    fin.clear();
    fin.open(fname);
    if (fin.good() && fin.is_open())
    {
        char ch;
        int i{};

        cout << "Current data in file:" << endl;

        while ((fin >> classtype).get(ch))
        {

            switch (classtype)
            {
            case Employee:
                pc[i] = new employee();
                break;
            case Manager:
                pc[i] = new manager();
                break;
            case Fink:
                pc[i] = new fink();
                break;
            case Highfink:
                pc[i] = new highfink();
                break;
            default:
                cout << "\nErroneous input in file..\n";
                break;
            }

            pc[i]->ReadAll(fin);
            pc[i]->ShowAll();
            i++;
        }

        fin.close();
    }
    else if (!fin.good())
    {
        cerr << "File don't exist!" << endl;
        exit(EXIT_FAILURE);
    }
    else
    {
        cerr << "Couldn't open file" << '\n';
        exit(EXIT_FAILURE);
    }

    cout << "\nDone!" << endl;
    return 0;
}

void printMenu()
{
    cout << "\nSelect type of data to write and save:\n"
         << Employee << ") Employee\t" << Manager << ") Manager\n"
         << Fink << ") Fink\t\t" << Highfink << ") High Fink\n"
         << "9) Quit Write-Menu\n";
}

// Listing 17.17 count.cpp // without arg
int countData(ifstream &fin, string fn)
{

    long count;
    long total = 0;
    char ch;
    fin.open(fn);
    if (!fin.is_open())
    {
        cerr << "Could not open " << fn << endl;
        fin.clear();
        return 1;
    }
    count = 0;
    while (fin.get(ch))
        count++;
    cout << count << " characters in " << fn << endl;
    total += count;
    fin.clear(); // needed for some implementations
    fin.close(); // disconnect file

    return 0;
}