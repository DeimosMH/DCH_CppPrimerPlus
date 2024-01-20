#ifndef QUEUE_TP_H_
#define QUEUE_TP_H_
#include <string>
#include <iostream>
#include <typeinfo> // check for class type pointers https://en.cppreference.com/w/cpp/types/is_pointer
#include "ch14_3_listing.h"

// based on exercise 12_5 queue
template <typename T>
class QueueTp
{
private:
    // Node is a nested structure definition local to this class
    struct Node
    {
        T item;
        struct Node *next;
    };

    // static int Q_SIZE {10};     // modifiable static value - will workj the same in this case
    enum // constant value that won't change throughout the program,
    {
        Q_SIZE = 10
    };

    // private class members
    Node *front;     // pointer to front of Queue
    Node *rear;      // pointer to rear of Queue
    int items;       // current number of items in Queue
    const int qsize; // maximum number of items in Queue

    // Preemptive definitions to prevent public copying
    // (you can also make deep copy definitions instead)
    QueueTp(const QueueTp &q) : qsize(0) {}
    QueueTp &operator=(const QueueTp &q) { return *this; }

public:
    QueueTp(int qs = Q_SIZE); // default constructor for QueueTp queue with a qs limit
    QueueTp(T);               // create queue with a T value
    ~QueueTp();

    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    void show() const;

    bool enqueue(const T &item); // add item to end
    bool dequeue(T &item);       // remove item from front
};
#endif


/// Constructors ///
template <typename T>
QueueTp<T>::QueueTp(int qs) : qsize(qs)
{
    front = rear = NULL; // or nullptr
    items = 0;
}

template <typename T>
QueueTp<T>::QueueTp(T)
{
    Node *temp;
    while (front != NULL) // while queue is not yet empty
    {
        temp = front;        // save address of front item
        enqueue(temp->item); // add item to the end
        front = front->next; // reset pointer to next item
        delete temp;         // delete former front
    }
}

template <typename T>
QueueTp<T>::~QueueTp()
{
    Node *temp;
    while (front != NULL) // while queue is not yet empty
    {
        temp = front;        // save address of front item
        front = front->next; // reset pointer to next item
        delete temp;         // delete former front
    }
}

/// Methods ///
template <typename T>
bool QueueTp<T>::isempty() const
{
    return items == 0;
}

template <typename T>
bool QueueTp<T>::isfull() const
{
    return items == qsize;
}

template <typename T>
int QueueTp<T>::queuecount() const
{
    return items;
}

// Add item to queue
template <typename T>
bool QueueTp<T>::enqueue(const T &item)
{
    if (isfull())
        return false;
    Node *add = new Node; // create node

    // on failure, new throws std::bad_alloc exception
    add->item = item; // set node pointers
    add->next = NULL; // or nullptr;
    items++;
    if (front == NULL) // if queue is empty,
        front = add;   // place item at front
    else
        rear->next = add; // else place at rear
    rear = add;           // have rear point to new node
    return true;
}

// Place front item into item variable and remove from queue
template <typename T>
bool QueueTp<T>::dequeue(T &item)
{
    if (front == NULL)
        return false;
    item = front->item; // set item to first item in queue
    items--;
    Node *temp = front;  // save location of first item
    front = front->next; // reset front to next item
    delete temp;         // delete former first item
    if (items == 0)
        rear = NULL;
    return true;
}

template <typename T>
void QueueTp<T>::show() const
{
    std::cout << "Number of all items in QueueTp: " << items - 1 << "\n";
    std::cout << "Current item on the end of QueueTp\n";

    // due to MI, derived classes will be detected as ABC class
    if (typeid(front->item) == typeid(Worker *))
    {
        front->item->Show();
    }
    else if (std::is_pointer_v<T>)
    {
        std::cout << "\n\tPointer to unknown class";
    }
    else
    {
        std::cout << "\n\tPointer to unknown data";
    }
}
