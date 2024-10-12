/**
 * @file 18a_address&.cpp
 * @brief Demonstrates the use of (void *) cast to print addresses of variables and handling void pointers in functions.
 *
 * This program declares three variables of different types: int, double, and char.
 * It then prints the memory addresses of these variables using the (void *) cast.
 * The (void *) cast is used to convert the address of a variable to a void pointer,
 * which can then be printed using std::cout.
 *
 * Additionally, the program includes a function `printValue` that takes a void pointer
 * and an integer indicating the type of data the pointer points to. The function
 * demonstrates how to cast the void pointer back to the appropriate type and print the value.
 *
 * @details
 * - int a: An integer variable initialized to 10.
 * - double b: A double variable initialized to 20.5.
 * - char c: A character variable initialized to 'A'.
 *
 * The addresses of these variables are printed in the following format:
 * - Address of a: <address>
 * - Address of b: <address>
 * - Address of c: <address>
 *
 * The values of these variables are printed using the `printValue` function.
 *
 * @note The (void *) cast is necessary because std::cout does not have an overload
 * for printing addresses of non-void pointers directly (e.g., &a, &b, &c). By casting the address to a void pointer, it can be printed using std::cout.
 * The reason why non-void pointers are not allowed is because the compiler does not know the type of the pointer and it will not know how to print it.
 * Although a, b, c are of different types, the address of a, b, c are of the same type, so we can cast them to void pointer.
 * The (void *) cast is used to convert the address of a variable to a void pointer, which can then be printed using std::cout.
 * @note The memory addresses of variables can change each time the program is run, as they are assigned by the operating system.
 */

#include <iostream>

/**
 * @brief Prints the value of the variable pointed to by the void pointer.
 * 
 * @param ptr A void pointer to the variable.
 * @param type An integer indicating the type of the variable (0 for int, 1 for double, 2 for char).
 */
void printValue(void* ptr, int type) {
    if (type == 0) { // int
        std::cout << "Integer value: " << *(static_cast<int*>(ptr)) << std::endl;
    } else if (type == 1) { // double
        std::cout << "Double value: " << *(static_cast<double*>(ptr)) << std::endl;
    } else if (type == 2) { // char
        std::cout << "Char value: " << *(static_cast<char*>(ptr)) << std::endl;
    } else {
        std::cout << "Unknown type" << std::endl;
    }
}

int main() {
    int a = 10;
    double b = 20.5;
    char c = 'A';

    // Printing addresses using (void *) cast
    // this is ike auto keyword in c++ which automatically deduces the type of the variable except here we are casting the address of the variable to void pointer
    std::cout << "Address of a: " << (void *)&a << std::endl; 
    std::cout << "Address of b: " << (void *)&b << std::endl;
    std::cout << "Address of c: " << (void *)&c << std::endl;

    // Printing values using printValue function
    printValue(&a, 0); // Pass int pointer
    printValue(&b, 1); // Pass double pointer
    printValue(&c, 2); // Pass char pointer

    return 0;
}