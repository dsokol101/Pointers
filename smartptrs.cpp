#include <iostream>
#include <memory> // for smart pointers

using namespace std;

int main() {
    int* iptr = new int;   
    *iptr = 42; 
    cout << "iptr: " << iptr << endl;
    cout << "Value pointed to by iptr: " << *iptr << endl;
    delete iptr; 

    // smart pointers are a safer alternative to raw pointers
    // because they automatically manage memory and prevent memory leaks.    
    // 2 types: unique_ptr and shared_ptr
    unique_ptr<int> uptr = make_unique<int>(42); // creates a unique_ptr that owns an int with value 42
    cout << "contents of uptr: " << *uptr << endl;
    
    // illegal: unique_ptr<int> uptr2 = uptr;
    shared_ptr<int> sptr1 = make_shared<int>(42); // creates a shared_ptr that owns an int with value 42
    cout << "contents of sptr1: " << *sptr1 << endl;
    shared_ptr<int> sptr2 = sptr1; // sptr2 shares ownership of the int with sptr1
    cout << "contents of sptr2: " << *sptr2 << endl;
    return 0;
}
