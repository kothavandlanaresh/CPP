#include <iostream>

int main() {
    // Example demonstrating the use of new and delete in C++

    // Advantage: Dynamic memory allocation
    // Allocate memory for an integer on the heap
    int* ptr = new int;//difference between new int and new in[10] is that new int allocates memory for a single integer, while new int[10] allocates memory for an array of 10 integers.
    *ptr = 10;
    std::cout << "Value: " << *ptr << std::endl;

    // Disadvantage: Manual memory management
    // If we forget to delete the allocated memory, it will cause a memory leak
    delete ptr;

    // Pitfall: Dangling pointer
    // After deleting the memory, ptr becomes a dangling pointer
    // Accessing it will lead to undefined behavior
    // std::cout << "Dangling pointer value: " << *ptr << std::endl; // Uncommenting this line will cause undefined behavior

    // Danger: Double delete
    // Deleting the same memory twice can cause a crash or undefined behavior
    // delete ptr; // Uncommenting this line will cause undefined behavior

    // Best practice: Set pointer to nullptr after deleting
    ptr = nullptr;

    // Example of allocating an array
    int* arr = new int[5];
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
    }

    // Accessing array elements
    for (int i = 0; i < 5; ++i) {
        std::cout << "Array element " << i << ": " << arr[i] << std::endl;
    }

    // Deleting the array
    delete[] arr;

    // Best practice: Use smart pointers to avoid manual memory management
    // #include <memory>
    // std::unique_ptr<int> smartPtr = std::make_unique<int>(20);
    // std::cout << "Smart pointer value: " << *smartPtr << std::endl;

    return 0;
}