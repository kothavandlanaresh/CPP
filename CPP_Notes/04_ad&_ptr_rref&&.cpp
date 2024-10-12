/**
 * @file 04_ad&_ptr_rref&&.cpp
 * @brief Demonstrates the usage of &, *, and && in C++ with various examples.
 * 
 * This file contains examples and explanations for the following key points:
 * 
 * Key Points:
 * - & (Address-of Operator): Used to obtain the memory address of a variable.
 * - * (Dereference Operator): Used to access the value at the memory address pointed to by a pointer.
 * - && (Rvalue Reference): Used to bind to temporary objects (rvalues).
 * 
 * Different Cases with Examples:
 * 
 * Case 1: Using & to Get the Address of a Variable
 * Example:
 * int a = 5;
 * int *aPtr = &a; // &a gets the address of a
 * 
 * Case 2: Using * to Dereference a Pointer
 * Example:
 * std::cout << "Value at address aPtr: " << *aPtr << std::endl; // *aPtr gets the value at the address
 * 
 * Case 3: Using && to Bind to an Rvalue
 * Example:
 * int &&rvalueRef = 10; // rvalueRef binds to the temporary rvalue 10
 * 
 * Case 4: Binding a Null Pointer to a Reference (Illegal)
 * Example:
 * // int &nullRef = *static_cast<int*>(nullptr); // Uncommenting this line will cause undefined behavior
 * 
 * Case 5: Casting Away const (Bad Practice)
 * Example:
 * const int constVal = 20;
 * int *modifiablePtr = const_cast<int*>(&constVal); // Casting away const
 * *modifiablePtr = 30; // Modifying const value (undefined behavior)
 * 
 * Case 6: Passing by Reference
 * Example:
 * void passByReference(int &ref) { ref += 10; }
 * 
 * Case 7: Passing by Pointer
 * Example:
 * void passByPointer(int *ptr) { if (ptr) { *ptr += 10; } }
 * 
 * Case 8: Passing by Rvalue Reference
 * Example:
 * void passByRvalueReference(int &&rref) { rref += 10; }
 * 
 * Summary:
 * - & (Address-of Operator): Used to get the address of a variable.
 * - * (Dereference Operator): Used to access the value at the memory address pointed to by a pointer.
 * - && (Rvalue Reference): Used to bind to temporary objects (rvalues).
 * - Binding a Null Pointer to a Reference: Illegal and results in undefined behavior.
 * - Casting Away const: Bad practice and can lead to errors.
 * - Passing by Reference: Efficient, modifies the original variable.
 * - Passing by Pointer: Efficient, modifies the original variable, requires careful handling.
 * - Passing by Rvalue Reference: Efficient, modifies temporary objects, should be used with care.
 * 
 * Dangerous Habits and How to Avoid Them:
 * - Dereferencing Null Pointers: Always check if a pointer is null before dereferencing it.
 * - Casting Away const: Avoid modifying const values. If necessary, ensure the original intent of const correctness is preserved.
 * - Binding Null Pointers to References: Never bind a reference to a dereferenced null pointer.
 * - Misusing Rvalue References: Ensure rvalue references are used appropriately and understand the implications of std::move.
 * - Memory Leaks: Always manage dynamic memory properly, using smart pointers where possible.
 * - Undefined Behavior: Be cautious of operations that can lead to undefined behavior, such as out-of-bounds access or modifying const data.
 */
#include <iostream>
#include <utility> // For std::move

// Function to demonstrate passing by reference
void passByReference(int &ref) {
    ref += 10;
}

// Function to demonstrate passing by pointer
void passByPointer(int *ptr) {
    if (ptr) {
        *ptr += 10;
    }
}

// Function to demonstrate passing by rvalue reference
void passByRvalueReference(int &&rref) {
    rref += 10;
}

int main() {
    // Case 1: Using & to Get the Address of a Variable
    int a = 5;
    int *aPtr = &a; // &a gets the address of a
    std::cout << "Address of a: " << aPtr << std::endl;

    // Case 2: Using * to Dereference a Pointer
    std::cout << "Value at address aPtr: " << *aPtr << std::endl; // *aPtr gets the value at the address

    // Case 3: Using && to Bind to an Rvalue
    int &&rvalueRef = 10; // rvalueRef binds to the temporary rvalue 10
    std::cout << "Rvalue reference: " << rvalueRef << std::endl;

    // Case 4: Binding a Null Pointer to a Reference (Illegal)
    // int &nullRef = *static_cast<int*>(nullptr); // Uncommenting this line will cause undefined behavior

    // Case 5: Casting Away const (Bad Practice)
    const int constVal = 20;
    int *modifiablePtr = const_cast<int*>(&constVal); // Casting away const
    *modifiablePtr = 30; // Modifying const value (undefined behavior)
    std::cout << "Modified const value: " << constVal << std::endl;

    // Case 6: Passing by Reference
    int b = 15;
    passByReference(b);
    std::cout << "Value after passByReference: " << b << std::endl;

    // Case 7: Passing by Pointer
    int c = 25;
    passByPointer(&c);
    std::cout << "Value after passByPointer: " << c << std::endl;

    // Case 8: Passing by Rvalue Reference
    int d = 35;
    passByRvalueReference(std::move(d)); // std::move converts lvalue to rvalue
    std::cout << "Value after passByRvalueReference: " << d << std::endl;

    return 0;
}
// Additional Cases to Explore Binding

// Case 9: Binding a Pointer to a Pointer
// Here, we have an integer variable `e` and a pointer `ePtr` that points to `e`.
// We then create a pointer to a pointer `ePtrPtr` that points to `ePtr`.
// This demonstrates how pointers can be nested to point to other pointers.
int e = 40;
int *ePtr = &e;
int **ePtrPtr = &ePtr; // ePtrPtr is a pointer to a pointer
std::cout << "Value at address ePtrPtr: " << **ePtrPtr << std::endl; // Dereferencing twice to get the value of e

// Case 10: Binding a Reference to a Pointer
// In this case, we bind a reference `eRef` to the value pointed to by `ePtr`.
// This means `eRef` is another name for the value of `e`.
int &eRef = *ePtr; // eRef is a reference to the value pointed to by ePtr
std::cout << "Value of eRef: " << eRef << std::endl; // eRef should output the value of e

// Case 11: Binding a Pointer to a Reference
// Here, we bind a pointer `fPtr` to the reference `eRef`.
// Since `eRef` is a reference to `e`, `fPtr` effectively points to `e`.
int *fPtr = &eRef; // fPtr is a pointer to the reference eRef
std::cout << "Value at address fPtr: " << *fPtr << std::endl; // Dereferencing fPtr to get the value of eRef

// Case 12: Binding an Rvalue Reference to a Function Return Value
// We define a function `getValue` that returns an integer.
// We then bind an rvalue reference `rvalueRefFunc` to the temporary return value of `getValue`.
// This demonstrates how rvalue references can be used to extend the lifetime of temporary objects.
int getValue() { return 50; }
int &&rvalueRefFunc = getValue(); // rvalueRefFunc binds to the temporary return value of getValue()
std::cout << "Rvalue reference from function: " << rvalueRefFunc << std::endl; // Should output 50

// Case 13: Binding a Const Reference to an Rvalue
// Here, we bind a const reference `constRvalueRef` to a temporary rvalue `60`.
// This is allowed because the reference is const, which extends the lifetime of the temporary.
const int &constRvalueRef = 60; // constRvalueRef binds to the temporary rvalue 60
std::cout << "Const reference to rvalue: " << constRvalueRef << std::endl; // Should output 60


// Possible Wrong Bindings

// Case 14: Binding a Null Pointer to a Reference (Illegal)
// Uncommenting the following line will cause undefined behavior because nullPtr is null.
// int *nullPtr = nullptr;
// int &nullRef = *nullPtr; // Dereferencing a null pointer is illegal

// Case 15: Binding a Temporary Object to a Non-const Lvalue Reference (Illegal)
// Uncommenting the following line will cause a compilation error because a temporary object cannot bind to a non-const lvalue reference.
// int &tempRef = 70; // Temporary rvalue cannot bind to non-const lvalue reference

// Case 16: Binding a Const Reference to a Non-const Object (Legal but Misleading)
// This is legal but can be misleading because the const reference suggests immutability, but the original object is non-const.
int nonConstVal = 80;
const int &constRefToNonConst = nonConstVal; // Legal but misleading
nonConstVal = 90; // Modifying the original non-const object
std::cout << "Const reference to non-const object: " << constRefToNonConst << std::endl; // Outputs 90 (misleading) constRefToNonConst is not const which is misleading to the reader.

// Case 17: Binding a Pointer to a Deleted Object (Illegal)
// Uncommenting the following lines will cause undefined behavior because the pointer points to a deleted object.
// int *deletedPtr = new int(100);
// delete deletedPtr;
// int &deletedRef = *deletedPtr; // Dereferencing a pointer to a deleted object is illegal

// Case 18: Binding a Reference to an Out-of-Scope Variable (Illegal)
// Uncommenting the following lines will cause undefined behavior because the reference points to an out-of-scope variable.
// int &outOfScopeRef;
// {
//     int temp = 110;
//     outOfScopeRef = temp; // Binding to a variable that will go out of scope
// }
// std::cout << "Out-of-scope reference: " << outOfScopeRef << std::endl; // Undefined behavior

// Case 19: Binding a Reference to a Moved-from Object (Legal but Dangerous)
// This is legal but dangerous because the moved-from object is in a valid but unspecified state.
int movedFromVal = 120;
int &&movedToRef = std::move(movedFromVal); // movedFromVal is now in a valid but unspecified state
std::cout << "Moved-from value: " << movedFromVal << std::endl; // Unspecified state
std::cout << "Moved-to reference: " << movedToRef << std::endl; // Outputs 120