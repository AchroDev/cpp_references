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
int main() {
    
    int a  = 5; // just a variable
    int& ref = a; // ref is being declared as a reference to the same memory location as the integer 'a'. Essentially an alias.
    ref = 2; // directly changes 'a' to the value 2
    
    LOG(a);
    
    std::cin.get();
}