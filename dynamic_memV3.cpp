#include <iostream>
using namespace std;
/* 3/18/2025
Exception Handling:

1. we saw the try, catch, and throw keywords
2. we saw that we can throw any type of data (including built-in types and objects)
3. bad_alloc is a built-in exception that is thrown when new fails to allocate memory
4. exception can propagate up the call stack
5. catch(...) can catch any type of exception
6. we noticed that the new keyword is not necessary to declare an exception
7. noexcept is a specifier that can be used to declare that a function does not throw exceptions
  (noexcept is used to optimize the code)
8. e.what() is a method that returns a string describing the exception

*/
int *createArray(int num) 
{
    int *arr = new int[9000000000000000]{5, 4}; // allocate memory for an array of ints
    // the empty braces initialize the memory to 0
    return arr;
}
int main()
{
    try
    {
        int num{0};
        cout << "How many elts are in your array? ";
        cin >> num;
        if (num <= 0)
        {
            throw "Invalid size";
        }
        int *numbers = createArray(num);
        for (int i{0}; i < num; ++i)
        {
            cout << numbers[i] << " ";
        }
        cout << endl;
        delete[] numbers;  // deallocate the memory
        numbers = nullptr; // set numbers to nullptr to avoid dangling pointer
    }
    catch (const char *str)
    {
        cout << "An error occurred: " << str << endl;
    }
    catch (bad_alloc ex)
    {
        cout << "Exception in main: " << ex.what() << endl;
    }
    catch (...)
    {
        cout << "An error occurred" << endl;
    }       
    cout << "Program continues to run" << endl;
    return 0;
}
