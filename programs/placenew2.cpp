/*
Fixed by managing memory locations used by placement new
and by adding appropriate uses of delete and of explicit destructor calls

The objects constructed by placement new should be
destroyed in order opposite that in which they were constructed.
(later object might have dependencies on an earlier object)
*/

// placenew2.cpp -- new, placement new, no delete
#include <iostream>
#include <string>
#include <new>
using namespace std;
const int BUF = 512;
class JustTesting
{
private:
    string words;
    int number;

public:
    JustTesting(const string &s = "Just Testing", int n = 0)
    {
        words = s;
        number = n;
        cout << words << " constructed\n";
    }
    ~JustTesting() { cout << words << " destroyed\n"; }
    void Show() const { cout << words << ", " << number << endl; }
};
int main()
{
    char *buffer = new char[BUF]; // get a block of memory
    JustTesting *pc1, *pc2;
    pc1 = new (buffer) JustTesting;     // place object in buffer
    pc2 = new JustTesting("Heap1", 20); // place object on heap
    cout << "Memory block addresses:\n"
         << "buffer: "
         << (void *)buffer << " heap: " << pc2 << endl;
    cout << "Memory contents:\n";
    cout << pc1 << ": ";
    pc1->Show();
    cout << pc2 << ": ";
    pc2->Show();

    JustTesting *pc3, *pc4;
    // fix placement new location
    pc3 = new (buffer + sizeof(JustTesting))
        JustTesting("Better Idea", 6);
    pc4 = new JustTesting("Heap2", 10);

    cout << "Memory contents:\n";
    cout << pc3 << ": ";
    pc3->Show();
    cout << pc4 << ": ";
    pc4->Show();
    delete pc2; // free Heap1
    delete pc4; // free Heap2
    // explicitly destroy placement new objects
    pc3->~JustTesting(); // destroy object pointed to by pc3
    pc1->~JustTesting(); // destroy object pointed to by pc1
    delete[] buffer;     // free buffer
    cout << "Done\n";
    return 0;
}

/*
Just Testing constructed
Heap1 constructed
Memory block addresses:
buffer: 00320AB0 heap: 00320CE0
Memory contents:
00320AB0: Just Testing, 0
00320CE0: Heap1, 20
Better Idea constructed
Heap2 constructed
Memory contents:
00320AD0: Better Idea, 6
00320EC8: Heap2, 10
Heap1 destroyed
Heap2 destroyed
Better Idea destroyed
Just Testing destroyed
Done
*/