#include "ch14_5_emp.h"

/// abstr_emp /// --------------------------------------
abstr_emp::abstr_emp()
{
    fname = "-";
    lname = "-";
    job = "-";
}

abstr_emp::abstr_emp(const std::string &fn, const std::string &ln, const std::string &j)
{
    fname = fn;
    lname = ln;
    job = j;
}

void abstr_emp::ShowAll() const
{
    std::cout << std::endl;
    std::cout << "First name: " << fname;

    std::cout << std::endl;
    std::cout << "Last name: " << lname;

    std::cout << std::endl;
    std::cout << "Profession: " << job;
    std::cout << std::endl;
}

void abstr_emp::SetAll()
{
    std::cout << std::endl;
    std::cout << "Enter the first name: ";
    std::getline(std::cin, fname);

    std::cout << "Enter the last name: ";
    std::getline(std::cin, lname);

    std::cout << "Enter the profession: ";
    std::getline(std::cin, job);
}

std::ostream &operator<<(std::ostream &os, const abstr_emp &e)
{
    os << e.fname << " " << e.lname << ", " << e.job;
    return os;
}

abstr_emp::~abstr_emp()
{
    std::cout << std::endl;
    std::cout << "\tEliminated: " << fname << " " << lname;
}

/// employee /// --------------------------------------
employee::employee() : abstr_emp()
{
}

employee::employee(const std::string &fn, const std::string &ln, const std::string &j) : abstr_emp(fn, ln, j)
{
}

void employee::ShowAll() const
{
    abstr_emp::ShowAll();
}

void employee::SetAll()
{
    abstr_emp::SetAll();
}

/// manager /// --------------------------------------
manager::manager() : abstr_emp()
{
    inchargeof = 0;
}

manager::manager(const std::string &fn, const std::string &ln,
                 const std::string &j, int ico) : abstr_emp(fn, ln, j)
{
    inchargeof = ico;
}

// Base class constructor is automatically invoked unless another
// constructor is explicitly called in the derived class for abstr_emp(e) - so called shallow copy
manager::manager(const abstr_emp &e, int ico) : abstr_emp(e)
{
    inchargeof = ico;
}

manager::manager(const manager &m) : abstr_emp(m)
{
    inchargeof = m.InChargeOf();
}

void manager::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << std::endl;
    std::cout << "Manager is in charge of: " << inchargeof << " people";
    std::cout << std::endl;
}

void manager::SetAll()
{
    abstr_emp::SetAll();

    std::cout << "Enter the amount of people manager will be in charge of: ";

    while (!(std::cin >> inchargeof || inchargeof <= 0))
    {
        std::cin.clear(); // reset input
        while (std::cin.get() != '\n')
            continue; // get rid of bad input
        std::cout << "Please enter a positive number: ";
    }

    std::cin.clear(); // reset input after putting in data
    while (std::cin.get() != '\n')
        continue; // get rid of bad input
}

/// fink /// --------------------------------------
fink::fink() : abstr_emp()
{
    reportsto = "-";
}

fink::fink(const std::string &fn, const std::string &ln,
           const std::string &j, const std::string &rpo) : abstr_emp(fn, ln, j)
{
    reportsto = rpo;
}

fink::fink(const abstr_emp &e, const std::string &rpo) : abstr_emp(e)
{
    reportsto = rpo;
}

fink::fink(const fink &e) : abstr_emp(e)
{
    reportsto = e.reportsto;
    // reportsto = e.ReportsTo();
    // reportsto = this->ReportsTo(); // ??
}

void fink::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "Fink reports to: " << reportsto;
    std::cout << std::endl;
}

void fink::SetAll()
{
    abstr_emp::SetAll();
    std::cout << "Enter superior to reports to: ";
    std::getline(std::cin, reportsto);
}

/// high fink /// --------------------------------------

highfink::highfink() : abstr_emp(), manager(), fink()
{
}

highfink::highfink(const std::string &fn, const std::string &ln,
                   const std::string &j, const std::string &rpo,
                   int ico) : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{
}

highfink::highfink(const abstr_emp &e, const std::string &rpo, int ico) : abstr_emp(e), manager(e, ico), fink(e, rpo)
{
}

highfink::highfink(const fink &f, int ico) : abstr_emp(f), manager(f, ico), fink(f)
{
}

highfink::highfink(const manager &m, const std::string &rpo) : abstr_emp(m), manager(m), fink(m, rpo)
{
}

highfink::highfink(const highfink &h) : abstr_emp(h), manager(h), fink(h)
{
}

void highfink::ShowAll() const
{
    manager::ShowAll();
    std::cout << std::endl;
    std::cout << "High fink reports to: " << fink::ReportsTo();
    std::cout << std::endl;
}

void highfink::SetAll()
{
    manager::SetAll();
    fink::SetAll(); // need protected setReportsto to be shorter
}