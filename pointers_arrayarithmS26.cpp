#include <iostream>
#include <vector>
#include <cstddef> // for size_t
/** 
 * pointer arithmetic -- when you add an integer to a pointer, the pointer
 * effectively moves that many elements in memory.
 *
 * how to dereference using pointer arithmetic e.g. *(arr + i)

 * how to use a pointer as an iterator to iterate through an array in a for loop.

 * We showed pointer to object and -> operator
   in another file we saw array of char and C-string functions
 */

using namespace std;
int main() {
    int arr[]{10, 20, 30, 40, 50};  
    size_t size = sizeof(arr)/sizeof(arr[0]);
 
    int* iptr = arr;
    // iptr points to the first element of the array
    // same thing as arr except it's not constant

    // pointer arithmetic allows you to add (sub) an integer
    // to a pointer which effectively moves that many elements in memory
    cout << *iptr << endl; // prints value at loc 0
    iptr = iptr + 2; // now iptr points to arr[2] which is 30  
    cout << *iptr << endl; // prints value at loc 2
    *iptr = 100; // arr[2] is now 100
    cout << arr[2] << endl; // prints 100
    iptr++; // now iptr points to arr[3] which is 40

    // let's write some for loops that use pointer arithmetic to iterate through the array
    for (int* ptr = arr;  ptr < arr + size; ptr++) {
        cout << *ptr << " "; // prints the value at the current pointer location
    }
    cout << endl;
    return 0;
}