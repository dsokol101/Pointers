#include <iostream>
using namespace std;
/* 2/27/2025 NEXT TIME

What is dynamic memory?
memory allocated during runtime (on the heap)
*/
int main() {
    int i = 10;
    // int* means pointer to an integer
    // & is an operator that means "THE ADDRESS OF"
    int* iptr = &i;   
    cout << "Value of i: " << i << endl;
    cout << "Address of i: " << &i << endl;
    cout << "Value of iptr: " << iptr << endl;
    cout << "Value of variable that iptr points to: " << *iptr << endl;
   
    return 0;
}
