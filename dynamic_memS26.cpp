#include <iostream>
using namespace std;
/* 3/12/2026 

What is dynamic memory?
memory allocated during runtime (on the heap)
opposite of automatic storage (on the stack)
why use dynamic memory?

- when you don't know the size of the array until runtime
- when you need more memory than is allowed on the stack
- when you want the memory to stick around after you return from the function that created it

Dynamic memory has storage duration that is the lifetime of the program.
*/

int main() {
    int* num = new int;
    *num = 10;
    cout << *num << endl; // output: 10
    delete num; // free the memory allocated for the integer

    const int SIZE = 5;
    int* arr = new int[SIZE]{0};
    // contrast to java: int[] arr = new int[SIZE];
    // delete[] arr; // free the memory allocated for the array

    cout << arr[0] << endl; // undefined behavior (accessing memory that has been freed)
    delete[] arr; // free the memory allocated for the array
    arr = nullptr; // set the pointer to null to avoid dangling pointer
    if (arr != nullptr) {
        cout << arr[0] << endl; // this will not execute because arr is now a null pointer
    } else {
        cout << "arr is a null pointer" << endl; // output: arr is a null pointer
    }   
    return 0;
}
