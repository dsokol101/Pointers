#include <iostream>
using namespace std;
/* 3/4/2025 

What is dynamic memory?
memory allocated during runtime (on the heap)
opposite of automatic memory (on the stack)
why use dynamic memory?

- when you don't know the size of the array until runtime
- when you need more memory than is allowed on the stack

- when you need to allocate memory for an object that will be returned from a function
  by reference or as a pointer

*/
int* createArray(int num) {   
    int* arr = new int[num]{5, 4}; // allocate memory for an array of ints
    // the empty braces initialize the memory to 0
    return arr;
}
int main() {
    int num{0};
    cout <<"How many elts are in your array? ";
    cin >> num;
    int* numbers =  createArray(num);
    for (int i{0}; i < num; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    delete[] numbers; // deallocate the memory
    numbers = nullptr; // set numbers to nullptr to avoid dangling pointer
    return 0;
}
