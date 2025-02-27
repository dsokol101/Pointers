#include <iostream>
#include <vector>
#include <cstddef> // for size_t
/** 2/27
 * pointer arithmetic -- when you add an integer to a pointer, the pointer
 * effectively moves that many elements in memory.
 *
 * how to dereference using pointer arithmetic e.g. *(arr + i)

 * how to use a pointer as an iterator to iterate through an array in a for loop.

 * We showed pointer to object and -> operator
   in another file we saw array of char and C-string functions
 */

using namespace std;
void print_array(int *arr, size_t size)
{
    for (size_t i{0}; i < size; ++i)
    {
        cout << arr[i] << " ";
        cout << *(arr + i) << " "; // identical to the line above
    }
    cout << endl;
    // let's use a pointer to iterate through the array
    for (int *ptr{arr}; ptr < arr + size; ++ptr)
    {
        cout << *ptr << " ";
    }
    cout << endl;
    // similar syntax is used when iterating through a container with an iterator
    vector<int> v{10, 20, 30, 40, 50};
    for (auto it = v.begin(); it < v.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    int arr[]{10, 20, 30, 40, 50};
    // the name of the array is the address of the first element of the array
    int *iptr = arr; // iptr points to the first element of the array
    // same thing as: int* iptr = &arr[0];
    iptr[2] = 100; // arr[2] is now 100
    print_array(arr, sizeof(arr) / sizeof(arr[0]));
    print_array(iptr, sizeof(arr) / sizeof(arr[0]));

    // can I create a pointer to an object, e.g. of type string?
    string* sptr;
    string s = "hello";
    sptr = &s;  
    cout << *sptr << endl;
    // the next 2 lines are identical
    int len = (*sptr).size(); // this is not usually not done -- use the arrow operator instead
    len = sptr->size(); // this is the preferred way to access a member of an object pointed to by a pointer
    cout << len << endl;
    return 0;
}

/*
    int num=1;
    int* iptr2= &num;
    arr = iptr2; // error: array name is not an l-value
*/