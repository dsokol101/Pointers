#include <iostream>
/**
 * Pointers as function parameters
   when you pass the address of a variable into a function, if the function
   modifies the value at that address, the change will be reflected in the 
   calling function.
 */


using namespace std;

void swap(int* p1, int* p2) {
    int temp = *p1;
    *p1=*p2;
    *p2=temp;
}

// this function modifies the value that iptr points to
// it is in essence the same as passing by reference
void increment(int* iptr) {
    // iptr++; this would increment the pointer, not the value it points to
    (*iptr)++; // increment the value that iptr points to
}
int main() {
    int num1=20;
    cout << "Value of num1: " << num1 << endl;
    increment(&num1);
    cout << "Value of num1 after increment: " << num1 << endl;
    int num2=5;
    swap(&num1, &num2);
    cout << "After swap, num1: " << num1 << ", num2: " << num2 << endl;
    return 0;
}
