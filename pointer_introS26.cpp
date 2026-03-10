#include <iostream>
/* 3/5/26
starting the topic of POINTERS in C and C++ */

using namespace std;

int main() {
    int i = 10;
    cout << "i: " << i << endl;
    cout << "address of i: " << &i << endl; // & is the address-of operator, it gives the memory address of i
    int* address_of_i = &i; // this is not correct, we cannot assign an address to an int variable
    cout << "address_of_i: " << address_of_i << endl; // this will
    cout << "contents of address_of_i: " << *address_of_i << endl; // * is the dereference operator, it gives the value at the address
    *address_of_i = 20; // this changes the value at the address to 20, which means i is now 20
    cout << "i: " << i << endl; // this will print 20
    return 0;
}