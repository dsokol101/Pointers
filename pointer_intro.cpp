#include <iostream>

using namespace std;

int main() {
    int i = 10;
    // int* means pointer to an integer
    // & is an operator that means "THE ADDRESS OF"
    int* iptr = &i;   
    cout << "Value of i: " << i << endl;
    cout << "Address of i: " << &i << endl;
    cout << "Value of iptr: " << iptr << endl;
    cout << "Value of variable that iptr points to: " << *iptr << endl;
    double d = 3.14;
    double* dptr = &d;
    d=d+1.0;
    cout << "Value of *dptr: " << *dptr << endl;
    *dptr += 1.0;
    cout << "Value of d: " << d << endl;

    int num = 100;
    iptr = &num;
    // uninitialized pointer -- also called a dangling pointer
    // DANGEROUS -- can cause segmentation faults
    int* iptr2;
    cout << "contents of iptr2: " << *iptr2 << endl;

    // not to be confused with reference parameters
    // int& means reference to an integer
    // & is an operator that means "REFERENCE TO"
    // use reference parameters with functions when you want the function to
    // modify the actual value of the variable
    int& iref = i;
    iref = 20;

    return 0;
}
