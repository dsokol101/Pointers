#include <iostream>
/** 2/27
 * Pointers as function parameters
   when you pass the address of a variable into a function, if the function
   modifies the value at that address, the change will be reflected in the 
   calling function.
 */


using namespace std;
// this function prints the elements of an array
// [] dereferences the pointer
void increment(int* iptr) {
    (*iptr)++;
}
int main() {
    int num=10;
    cout << "Value of num: " << num << endl;
    increment(&num);
    cout << "Value of num after increment: " << num << endl;
    return 0;
}
