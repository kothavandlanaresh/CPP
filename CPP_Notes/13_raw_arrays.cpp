/**
 * @file 13_raw_arrays.cpp
 * @brief Demonstrates the use of raw arrays in C++ and prints their elements.
 *
 * This example shows how to define and use a raw array in C++. Raw arrays are 
 * a basic feature of the C++ language, but they come with several limitations 
 * and potential pitfalls:
 * 
 * - **Fixed Size**: The size of a raw array must be known at compile time and 
 *   cannot be changed dynamically.
 * - **No Bounds Checking**: Accessing elements outside the bounds of the array 
 *   can lead to undefined behavior, which can cause crashes or security vulnerabilities.
 * - **Manual Memory Management**: When using dynamic arrays (allocated with `new`), 
 *   the programmer is responsible for deallocating the memory using `delete`, 
 *   which can lead to memory leaks if not handled correctly.
 * 
 * Modern C++ provides several alternatives that address these issues:
 * 
 * - **std::array**: A fixed-size array that provides bounds checking in debug mode 
 *   and integrates well with the C++ Standard Library.
 * - **std::vector**: A dynamic array that can grow or shrink in size as needed, 
 *   automatically manages memory, and provides bounds checking.
 * - **std::unique_ptr** and **std::shared_ptr**: Smart pointers that manage the 
 *   lifetime of dynamically allocated objects, reducing the risk of memory leaks 
 *   and dangling pointers.
 * 
 * Using these modern features can lead to safer and more maintainable code.
 */

#include <iostream>
#include <array>
#include <vector>
#include <memory>

// Function to print elements of an std::array
template <std::size_t N>
void printStdArray(const std::array<int, N>& arr) {
    for (const auto& elem : arr) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

// Function to print elements of an std::vector
void printVector(const std::vector<int>& vec) {
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Using std::array
    std::array<int, 5> stdArray = {1, 2, 3, 4, 5};
    std::cout << "Elements of std::array: ";
    printStdArray(stdArray);

    // Using std::vector
    std::vector<int> stdVector = {1, 2, 3, 4, 5};
    std::cout << "Elements of std::vector: ";
    printVector(stdVector);

    // Using std::unique_ptr for dynamic array
    std::unique_ptr<int[]> uniquePtrArray(new int[5]{1, 2, 3, 4, 5});
    std::cout << "Elements of std::unique_ptr array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << uniquePtrArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

// Function to print elements of an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Define a raw array with 5 elements
    int myArray[5] = {1, 2, 3, 4, 5};

    // Get the size of the array
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Print the elements of the array
    std::cout << "Elements of the array: ";
    printArray(myArray, size);

    return 0;
}