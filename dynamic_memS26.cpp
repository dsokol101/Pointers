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
    const int SIZE = 5;
    int* arr = new int[SIZE];
    // contrast to java: int[] arr = new int[SIZE];
    delete[] arr; // free the memory allocated for the array
    return 0;
}
