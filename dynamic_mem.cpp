#include <iostream>
using namespace std;
/* 3/4/2025 

What is dynamic memory?
memory allocated during runtime (on the heap)
opposite of automatic memory (on the stack)
why use dynamic memory?

- when you don't know the size of the array until runtime
- when you need more memory than is allowed on the stack

- when you need to allocate memory for an object that will be returned from a function
  by reference or as a pointer

*/
int* practice() {
    int num{0};
    
    cout <<"How many elts are in your array? ";
    cin >> num;
    int* arr = new int[num]{5, 4}; // allocate memory for an array of ints
    // the empty braces initialize the memory to 0
    for (int i{0}; i < num; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return arr;
}
int main() {
    // int i = new int; // error: new returns a pointer to the allocated memory
    
    // new allocates memory on the heap and returns a pointer to that memory
    int* iptr = new int{}; // iptr is a pointer to an integer   
    // the empty braces initializes the memory to 0
    // if you don't initialize the memory, it will contain junk

    *iptr = 10; // dereference iptr and assign 10 to the memory it points to
    cout << "Value of iptr: " << iptr << endl;
    cout << "Value of variable that iptr points to: " << *iptr << endl;
    delete iptr; // deallocate the memory
    iptr = nullptr; // set iptr to nullptr to avoid dangling pointer
    cout << "Value of iptr after delete: " << iptr << endl;
    if (iptr) {
        cout << "value of *iptr: " << *iptr << endl;
    }
    practice();
    return 0;
}
