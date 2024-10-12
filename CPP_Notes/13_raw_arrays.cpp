#include <iostream>

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