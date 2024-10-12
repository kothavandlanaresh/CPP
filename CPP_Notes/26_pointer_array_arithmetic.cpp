#include <iostream>

/**
 * @file 26_pointer_array_arithmetic.cpp
 * @brief Demonstrates various methods to print array elements using pointers and array indexing in C++.
 * 
 * This program initializes an array of integers and demonstrates the following:
 * - Printing array elements using pointer arithmetic.
 * - Incorrect usage of pointers to print array elements.
 * - Printing array elements using array indexing.
 * - Printing array elements using a range-based for loop with an array.
 * - Printing array elements using a range-based for loop with pointers.
 * 
 * @note The incorrect usage section highlights the mistake of printing the pointer address instead of the values.
 * 
 * @limitations
 * - Pointers cannot be directly used in range-based for loops as they are designed to work with containers.
 * 
 * @return int Returns 0 upon successful execution.
 */

int main() {
    // Initialize an array of integers
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr; // Pointer to the first element of the array

    // Print the array elements using pointer arithmetic
    std::cout << "Array elements using pointer arithmetic:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;

    // Print the array elements using just ptr (incorrect usage)
    std::cout << "Array elements using just ptr (incorrect usage):" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << ptr << " "; // This will print the address of the pointer which is the same for all iterations, not the values. The ptr is the address of the first element of the array.
        //where as *(ptr + i) will give the value of the element at the address ptr + i
        //&ptr will give the address of the pointer itself
    }
    std::cout << std::endl;

    // Print the array elements using array indexing
    std::cout << "Array elements using array indexing:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Print the array elements using range-based for loop (array)
    std::cout << "Array elements using range-based for loop (array):" << std::endl;
    for (int value : arr) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Print the array elements using range-based for loop (pointer)
    std::cout << "Array elements using range-based for loop (pointer):" << std::endl;
    for (int* p = arr; p < arr + 5; ++p) {
        std::cout << *p << " ";
    }
    // the pointers cant be used in range based for loop as the range based for loop is designed to work with containers and not pointers
    std::cout << std::endl;

    return 0;
}