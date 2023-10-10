// stack.h -- class definition for the stack ADT
#ifndef STACK_H_
#define STACK_H_

struct Customer {
    char fullname[35];
    double payment;
};

class Stack
{
private:
    enum
    {
        MAX = 10
    };               // constant specific to class

    Customer Client[MAX];   // holds stack structures
    int top;                // index for top stack item
    
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise
    bool push(const Customer &item); // add item to stack
    // pop() returns false if stack already is empty, true otherwise
    bool pop(Customer &item); // pop top into item
};
#endif