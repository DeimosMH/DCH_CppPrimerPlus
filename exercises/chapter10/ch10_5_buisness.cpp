// stack.cpp -- Stack member functions
#include "ch10_5_buisness.h"

Stack::Stack() // create an empty stack
{
    top = 0;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const customer &item)
{
    if (top < MAX)
    {
        Client[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(customer &item)
{
    if (top > 0)
    {
        item = Client[--top];
        return true;
    }
    else
        return false;
}

/*
The default constructor guarantees that all stacks are created empty.The code for
pop() and push() guarantees that the top of the stack is managed properly.
*/