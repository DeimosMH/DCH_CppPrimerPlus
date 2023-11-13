// stack.cpp -- Stack member functions
#include "ch12_4_stack.h"
Stack::Stack(int n)
// create an empty stack
{
    pitems = new Item[n]{};
    size = n;
    top = 0;
}

Stack::Stack(const Stack &st)
{
    pitems = new Item[st.size]{};

    for (int i = 0; i < st.size; i++)
        pitems[i] = st.pitems[i];

    size = st.size;
    top = st.top;
}

Stack::~Stack(){
    delete [] pitems;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item &item)
{
    if (top < MAX)
    {
        Item *newPitems = new Item[++size]{};
        for (int i = 0; i < (size - 1); i++)
            newPitems[i] = pitems[i];
        delete[] pitems;
        pitems = newPitems;

        pitems[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item &item)
{
    if (top > 0)
    {
        Item *newPitems = new Item[--size]{};
        for (int i = 0; i < size; i++)
            newPitems[i] = pitems[i];
        delete[] pitems;
        pitems = newPitems;

        item = pitems[--top];
        return true;
    }
    else
        return false;
}

Stack &Stack::operator=(const Stack &st)
{
    pitems = new Item[st.size]{};

    for (int i = 0; i < st.size; i++)
        pitems[i] = st.pitems[i];

    size = st.size;
    top = st.top;

    return *this;
}
