#include <iostream>
using namespace std;
// this function prints the elements of an array
// the c-style array "decays" to a pointer when passed to a function
// so we need to also pass the size of the array as a parameter
// [] dereferences the pointer
void print_array(const int* nums, size_t size) {
    for (size_t i = 0; i < size; i++) {
        cout << nums[i] << " "; // this is the same as *(nums + i)
    }
    for (const int* iptr=nums; iptr < nums + size; iptr++) {
        cout << *iptr << " "; // this is the same as nums[i]
    }   
    cout << endl;
    cout << "size of arr in print_array function: " << sizeof arr << endl; // this will print the size of a pointer, not the size of the array  
}
int main() {
    int arr[]{10, 20, 30, 40, 50};  
    cout << "size of arr in main function: " << sizeof arr << endl;
    // the name of the array is the address of the first element of the array
    cout << "printing in main with range-based for loop: " << endl;
   
    for (int num: arr) {
        cout << num << " ";
    }
    cout << endl;
    int* iptr = arr; // iptr points to the first element of the array
    // same thing as: int* iptr = &arr[0];
    iptr[2] = 100; // arr[2] is now 100
    cout << "size of iptr: " << sizeof iptr << endl; // this will print the size of a pointer, not the size of the array

     // you CANNOT use a range-base for loop with a pointer (ex: in the above function)
   // for (int num: iptr) { // this will not work because iptr is a pointer, not an array
   //     cout << num << " "; // this will print garbage values until it hits a 0 (null terminator)
   // }


    print_array(arr, sizeof(arr)/sizeof(arr[0]));
    print_array(iptr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}

/*
    int num=1;
    int* iptr2= &num;
    arr = iptr2; // error: array name is not an l-value
*/