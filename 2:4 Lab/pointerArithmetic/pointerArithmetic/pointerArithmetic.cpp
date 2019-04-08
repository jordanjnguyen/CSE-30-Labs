#include <iostream>
#include "Input.h"

using namespace std;

int main() {
    
    // The variable a (2002) comes from the Input.h file
    
    // The pointer p points to the address of a
    short* p = &a;
    //cout << &a << endl;
    
    // The pointer c points to the same place as p
    char* c = (char*)p;
    
    // Increment the value of c
    c++;
    
    // Print the short pointed to by c
    cout << *(short*)c << endl;
    
    //cout << p << endl;
    
    return 0;
}
