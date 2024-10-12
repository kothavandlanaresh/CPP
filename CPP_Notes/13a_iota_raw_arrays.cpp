/**
 * @file 13a_iota_raw_arrays.cpp
 * @brief Demonstrates the use of std::iota with raw arrays in C++.
 *
 * This example creates an array of size 10 and fills it with sequentially 
 * increasing values starting from 0 using the std::iota function. It then 
 * prints the contents of the array to the standard output.
 *
 * The std::iota function is part of the <numeric> header and is used to 
 * fill a range with sequentially increasing values. In this example, 
 * std::iota is used to fill a raw array with values starting from 0.
 * 
 * This may be useful when you need to initialize an array with a sequence,
 * similar to ranges in other languages.
 *
 * The code includes:
 * - Creation of a raw array of integers with a fixed size of 10.
 * - Use of std::iota to fill the array with values starting from 0.
 * - A loop to print the contents of the array.
 *
 * @author Naresh K.
 * @date 2023-10-05
 */
#include <iostream>
#include <numeric> // For std::iota

int main() {
    // Create an array of size 10
    int arr[10];

    // Fill the array with sequentially increasing values starting from 0
    std::iota(std::begin(arr), std::end(arr), 0);

    // Print the contents of the array
    std::cout << "Array contents: ";
    for (const auto& value : arr) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
