#include <iostream>
#include "ch10_8_list.h"

List::List()
{
}

List::List(int valTab[], int numEl)
{
    if (numEl > MAX)
    {
        std::cout << "More elements than max allowed";
        return;
    }

    for (int i{}; i < numEl; ++i)
    {
        dataVal[i] = valTab[i];
        ++top;
    }
}

List::~List()
{
}

bool List::isEmpty()
{
    return top == 0;
}

bool List::isFull()
{
    return top == MAX;
}

bool List::add(int elVal)
{
    if (top < MAX)
    {
        dataVal[top++] = elVal;
        return true;
    }
    else
        return false;
}

bool List::pop()
{
    if (top > 0)
    {
        dataVal[top--] = 0;
        return true;
    }
    else
        return false;
}

void List::display()
{
    for (int i{}; i < top; ++i)
        std::cout << "\nItem [" << i << "]: " << dataVal[i];
}

bool List::modify(int elNum, int newVal)
{
    if (elNum >= top)
    {
        std::cout << "Item does not exist";
        return false;
    }

    std::cout << "\nItem [" << elNum << "]: " << dataVal[elNum];
    std::cout << "\nChanged value to:";

    dataVal[elNum] = newVal;
    std::cout << "\nItem [" << elNum << "]: " << dataVal[elNum];

    return true;
}