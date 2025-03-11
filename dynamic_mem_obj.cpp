#include <iostream>
using namespace std;
/* 3/11/2025

What is dynamic memory?
memory allocated during runtime (on the heap)
opposite of automatic memory (on the stack)
*/
int main()
{
    string *sptr = new string{"hello, world!"};
    cout << "sptr: " << sptr << endl;
    cout << "*sptr: " << *sptr << endl;
    cout << "length of *sptr: " << sptr->length() << endl;
    delete sptr;    // deallocate the memory
    sptr = nullptr; // set sptr to nullptr to avoid dangling pointer
    return 0;
}
