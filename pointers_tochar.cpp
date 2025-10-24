#include <iostream>
#include <vector>
#include <cstddef> // for size_t
#include <cstring>

/** 10/22
 */

using namespace std;
// this is the typical way of getting a C-style string as a parameter
void print_cstring(const char* str)
{
    // it is OK in C++ to print 
    // 1
    cout << str << endl;
    // 2
    for (size_t i = 0; str[i] != '\0'; i++)
    {
        cout << str[i];
    }
    cout << endl;
    // 3
    for (size_t i = 0; i < strlen(str); i++)
    {
        cout << str[i];
    }
    cout << endl;
    // 4 use pointer notation
    for (const char* ptr = str; *ptr != '\0'; ptr++)
    {
        cout << *ptr;
    }
    cout << endl;
    // 5 identical to 4
    const char* ptr = str;
    while(*ptr)
    {
        cout << *ptr;
        ptr++;
    }
    cout << endl;
}
int main()
{
   // char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; 
    char cstring[] = "Hello, world!";
    print_cstring(cstring);
    char* str2 = new char[strlen(cstring) + 1]; // +1 for null terminator
    strcpy(str2, cstring); // copy cstring to str2
    print_cstring(str2);
    delete[] str2; // deallocate memory
    return 0;
}