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
    // The '&' operator is used to obtain the memory address of a variable below.
    int* b = &a; // b is being declared as a pointer variable that points to the direct memory location of 'a'.
    // The '&' operator is used to create a reference to a variable in the second case.
    int& ref = a; // ref is being declared as a reference to the same memory location as the integer 'a'. Essentially an alias.
    
    
    LOG("AchroDev");
    
    std::cin.get();
}