#include <iostream>
using namespace std;
/* 3/12/2026

What is dynamic memory?
memory allocated during runtime (on the heap)
opposite of automatic storage (on the stack)
why use dynamic memory?

- when you don't know the size of the array until runtime
- when you need more memory than is allowed on the stack
- when you want the memory to stick around after you return from the function that created it

Dynamic memory has storage duration that is the lifetime of the program.
*/

/* write a function that dynamically allocates an
array and show that this array sticks around for the
lifetime of the program  */

int *createArray(int size) 
{
    if (size <=0) {
        throw string{"Invalid size"};
    }
    int *arr = new int[size]{0};
    // ...
    return arr;
}
int main()
{
    // out << "Enter the size of the array: ";
    int size = 0; // this is a large number that will likely cause bad_alloc to be thrown
                  // cin >> size; // size is only known during runtime.
    //  call a function that dynamically allocates an array of the given size and returns a pointer to it
    try
    {
        int *numbers = createArray(size);
        delete[] numbers;
        numbers = nullptr;
    }
    catch(string ex)
    {
        cout << "Exception in main: " << ex << endl;
    }   
    catch (bad_alloc ex)
    {
        cout << "Exception in main: " << ex.what() << endl;
    }
    catch (...) // any other type of Exception
    {
        cout << "An error occurred" << endl;
    }   

    // in any event, the program continues here
    cout << "Program continues to run" << endl;
    return 0;
}
