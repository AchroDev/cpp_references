#include <iostream>

#define LOG(x) std::cout << x << std::endl;

// References are usually just pointers in disquise
// Some delicious syntactical sugar.

int main() {
    
    int a  = 5; // just a variable
    // The '&' operator is used to obtain the memory address of a variable below.
    int* b = &a; // b is being declared as a pointer variable that points to the direct memory location of 'a'.
    // The '&' operator is used to create a reference to a variable in the second case.
    int& ref = a; // ref is being declared as a reference to the same memory location as the integer 'a'. Essentially an alias.
    
    
    LOG("AchroDev");
    
    std::cin.get();
}