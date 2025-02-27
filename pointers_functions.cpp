#include <iostream>
/** 2/27
 * Pointers as function parameters
   when you pass the address of a variable into a function, if the function
   modifies the value at that address, the change will be reflected in the 
   calling function.
 */


using namespace std;
// this function modifies the value that iptr points to
// it is in essence the same as passing by reference
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
