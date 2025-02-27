#include <iostream>
#include <vector>
#include <cstddef> // for size_t
/** 2/27
 */

using namespace std;
// this is the typical way of getting a C-style string as a parameter
void print_cstring(const char* str)
{
    for (size_t i = 0; str[i] != '\0'; i++)
    {
        cout << str[i];
    }
    cout << endl;
    for (const char* ptr = str; *ptr; ptr++)
    {
        cout << *ptr;
    }
}
int main()
{
    char cstring[] = "Hello, world!";
    print_cstring(cstring);
    return 0;
}