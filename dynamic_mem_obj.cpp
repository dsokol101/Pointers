#include <iostream>
using namespace std;
/* 10/24/2025

A pointer to an object is declared with the same * syntax as a pointer to a built-in type.
when you allocate an object with new, the object gets allocated on the heap and 
its constructor is called.
If there are no parameters, the default constructor is called.
To access members of the object, you can use the dereference operator * or the arrow operator ->.
The arrow operator -> is preferred because it is more concise.   

Any object allocated with new must be deleted with delete to avoid memory leaks.
*/
int main()
{
    string s; // this allocates an object of type string on the stack and calls the default
    // constructor
    string s2{}; // same as above
    string s3(); // function declaration, NOT an object

    string *sptr = new string{"hello, world!"}; // allocates a string object on the heap
    string *sptr2 = new string(); // calls default constructor
    string *sptr4 = new string{}; // calls default constructor
    string *sptr3 = new string; // calls default constructor

    cout << "sptr: " << sptr << endl;
    cout << "*sptr2: " << *sptr2     << endl;
    cout << (*sptr).length() << endl;
    cout << "length of *sptr: " << sptr->length() << endl;
    delete sptr;    // deallocate the memory
    sptr = nullptr; // set sptr to nullptr to avoid dangling pointer
    return 0;
}
