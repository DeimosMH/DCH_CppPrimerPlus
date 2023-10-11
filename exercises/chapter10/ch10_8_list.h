#ifndef _LIST_H_
#define _LIST_H_

class List
{
private:
    enum{
        MAX = 10
    };
    int dataVal[MAX]{};
    int top{};

public:
    List();
    List(int valTab[], int numEl);
    ~List();
    bool isEmpty();
    bool isFull();
    bool add(int elVal);
    bool pop();
    bool modify(int elNum, int newVal);
    void display();
};



#endif