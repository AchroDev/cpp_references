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

// Function for example of how this doesn't use a reference and direct copies the variable fed to it, i.e 'a' or 5.
// This causes the increment to not happen as it doesn't have "ownership" or access to the data.
void Increment(int* value)
{
    // encapsulating '*value' in parenthesis causes the dereference to happen first.
    (*value)++; // dereferencing to increment the value stored in the variable and not the memory address
}

int main() {
    
    int a  = 5; // just a variable
    Increment(&a); // now using '&' to direct access the memory value
    LOG(a);
    
    std::cin.get();
}