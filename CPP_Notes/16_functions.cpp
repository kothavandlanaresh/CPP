/**
 * @file functions.cpp
 * @brief Demonstrates different types of functions in C++ and their usage.
 *
 * This file contains examples of various types of functions in C++:
 * - Functions with no return type and no parameters
 * - Functions with return type and no parameters
 * - Functions with parameters and no return type
 * - Functions with parameters and return type
 * - Template functions
 * - Functions that take std::function as a parameter
 *
 * The main function demonstrates how to call these functions.
 *
 * Functions:
 * - void greet(): Prints a greeting message to the console.
 * - int getNumber(): Returns a fixed integer value.
 * - void printSum(int a, int b): Prints the sum of two integers.
 * - int multiply(int a, int b): Returns the product of two integers.
 * - template <typename T> T add(T a, T b): Returns the sum of two values of type T.
 * - void executeFunction(const std::function<void()>& func): Executes a function passed as a std::function parameter.
 *
 * Best Practices and Performance Improvements:
 * - Prefer using `const` references for parameters that are not modified within the function to avoid unnecessary copying.
 * - Use inline functions for small, frequently called functions to reduce function call overhead.
 * - Consider using `constexpr` for functions that can be evaluated at compile time to improve performance.
 * - Ensure functions have meaningful names and comments to improve code readability and maintainability.
 * - Avoid using `using namespace std;` in header files or global scope to prevent namespace pollution.
 */

#include <iostream>
#include <functional>
using namespace std;

// Function with no return type and no parameters
/**
 * @brief Prints a greeting message to the console.
 */
void greet() {
    cout << "Hello, World!" << endl;
}

// Function with return type and no parameters
/**
 * @brief Returns a fixed integer value.
 * 
 * @return int Fixed integer value 42.
 */
int getNumber() {
    return 42;
}

// Function with parameters and no return type
/**
 * @brief Prints the sum of two integers.
 * 
 * @param a First integer.
 * @param b Second integer.
 */
void printSum(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

// Function with parameters and return type
/**
 * @brief Returns the product of two integers.
 * 
 * @param a First integer.
 * @param b Second integer.
 * @return int Product of the two integers.
 */
int multiply(int a, int b) {
    return a * b;
}

// Template function to demonstrate the use of templates
/**
 * @brief Returns the sum of two values of type T.
 * 
 * @tparam T Type of the values.
 * @param a First value.
 * @param b Second value.
 * @return T Sum of the two values.
 */
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Function that takes std::function as a parameter
/**
 * @brief Executes a function passed as a std::function parameter.
 * 
 * @param func Function to be executed.
 */
void executeFunction(const std::function<void()>& func) {
    func();
}

// Main function to demonstrate the usage of above functions
/**
 * @brief Main function to demonstrate the usage of various functions.
 * 
 * @return int Exit status.
 */
int main() {
    // Calling function with no return type and no parameters
    greet();

    // Calling function with return type and no parameters
    int number = getNumber();
    cout << "Number: " << number << endl;

    // Calling function with parameters and no return type
    printSum(5, 7);

    // Calling function with parameters and return type
    int product = multiply(4, 6);
    cout << "Product: " << product << endl;

    // Using template function
    cout << "Template Add: " << add(3, 4) << endl;
    cout << "Template Add: " << add(2.5, 3.5) << endl;

    // Using std::function to pass a lambda
    executeFunction([]() {
        cout << "Lambda function executed!" << endl;
    });

    return 0;
}