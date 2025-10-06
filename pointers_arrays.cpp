#include <iostream>
/** 
 * pointer arithmetic
 * how to dereference using pointer arithmetic
 * how to use a pointer as an iterator to iterate through an array in a for loop.
 */
// how is the name of an array related to the pointer type?

using namespace std;
// this function prints the elements of an array
// [] dereferences the pointer
void print_array(int* arr, size_t size) {
    cout << "size of arr in print_array function: " << sizeof(arr) << endl;
    
    int* ip=arr; // ip points to the first element of the array
    //int* ip=&arr[0]; // same as above
    while(ip < arr + size) { // arr + size is the address just past the last element
        cout << *ip << " "; // dereference the pointer to get the value
        ip++; // increment the pointer to point to the next element
    }
    
    for(size_t i{0}; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[]{10, 20, 30, 40, 50};  
    cout << "size of arr in main function: " << sizeof(arr) << endl;
    // the name of the array is the address of the first element of the array
    cout << "printing in main with range-based for loop: " << endl;
    // you CANNOT use a range-base for loop with a pointer (ex: in the above function)
    for (int num: arr) {
        cout << num << " ";
    }
    cout << endl;
    int* iptr = arr; // iptr points to the first element of the array
    // same thing as: int* iptr = &arr[0];
    iptr[2] = 100; // arr[2] is now 100
    print_array(arr, sizeof(arr)/sizeof(arr[0]));
    print_array(iptr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}

/*
    int num=1;
    int* iptr2= &num;
    arr = iptr2; // error: array name is not an l-value
*/