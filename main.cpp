#include <iostream>

#define LOG(x) std::cout << x << std::endl;

// References are usually just pointers in disquise
// Some delicious syntactical sugar.

/* 
 * KEY DIFFERENCES BETWEEN A POINTER AND A REFERNCE
 * Pointer: A pointer stores the memory address of a variable. You can use it to indirectly access and modify 
   the value at that address.
 * Reference: A reference is an alias for an existing variable. It doesn't store an address but directly refers to
   the same memory location as the original variable. 
*/

// now using a reference in the parameters instead of a pointer.
void Increment(int& value)
{
    value++; // no longer need to deref here.
}

int main() {
    
    int a  = 5; // just a variable
    Increment(a); // the '&' can be removed here as the function now takes a reference in the parameters
    LOG(a);
    
    std::cin.get();
}