/**
 * @file 18_address&.cpp
 * @brief This program demonstrates the use of references in C++.
 *
 * References are an alias for another variable, providing a way to access the same memory location with a different name.
 * They are often used for parameter passing in functions to avoid copying large amounts of data.
 *
 * The program includes:
 * - A function `increment` that takes an integer reference and increments its value.
 * - An example in the `main` function that shows how references work and how they can be used to modify variables.
 *
 * Detailed Explanation:
 * In C++, a reference is an alias for another variable. Once you create a reference to a variable, you cannot change it to refer to another variable. 
 * This is different from pointers, which can be reassigned to point to different variables.
 *
 * Example:
 * @code
 * #include <iostream>
 *
 * int main() {
 *     int a = 10;
 *     int b = 20;
 *
 *     // Create a reference to variable 'a'
 *     int& ref = a;
 *
 *     std::cout << "ref initially refers to a: " << ref << std::endl; // Output: 10
 *
 *     // Changing the value of 'a' through the reference
 *     ref = 15;
 *     std::cout << "a after changing ref: " << a << std::endl; // Output: 15
 *
 *     // Attempting to rebind the reference to another variable 'b'
 *     // This is not allowed and will not compile:
 *     // ref = b; // This line would change the value of 'a' to 20, not rebind ref to 'b'
 *
 *     // Correct way to change the value of 'b' through the reference
 *     ref = b;
 *     std::cout << "a after assigning b to ref: " << a << std::endl; // Output: 20
 *     std::cout << "b: " << b << std::endl; // Output: 20
 *
 *     return 0;
 * }
 * @endcode
 *
 * In this example:
 * - `int& ref = a;` creates a reference `ref` to the variable `a`.
 * - You can use `ref` to change the value of `a`.
 * - Attempting to rebind `ref` to `b` directly is not allowed. Instead, `ref = b;` changes the value of `a` to the value of `b`.
 *
 * The key takeaway is that once a reference is bound to a variable, it remains bound to that variable for its entire lifetime.
 */

#include <iostream>

/**
 * @brief Increments the value of the given integer reference.
 * 
 * @param ref A reference to an integer whose value will be incremented.
 */
void increment(int &ref) {
    ref++; // Increment the value of the integer that 'ref' refers to.
}

int main() {
    int a = 10;
    int b = 20;

    // Create a reference to variable 'a'
    int &ref = a;

    std::cout << "ref initially refers to a: " << ref << std::endl; // Output: 10

    // Changing the value of 'a' through the reference
    ref = 15;
    std::cout << "a after changing ref: " << a << std::endl; // Output: 15

    // Attempting to rebind the reference to another variable 'b'
    // This is not allowed and will not compile:
    // ref = b; // This line would change the value of 'a' to 20, not rebind ref to 'b'

    // Correct way to change the value of 'b' through the reference
    ref = b;
    std::cout << "a after assigning b to ref: " << a << std::endl; // Output: 20
    std::cout << "b: " << b << std::endl; // Output: 20

    // Additional example with the increment function
    int &refA = a; // 'refA' is a reference to 'a'. It is now an alias for 'a'.

    std::cout << "Initial value of a: " << a << std::endl;
    std::cout << "Initial value of refA: " << refA << std::endl;

    // Modifying 'refA' will modify 'a' as well, since they refer to the same memory location.
    refA = 20;
    std::cout << "Value of a after modifying refA: " << a << std::endl;

    // Passing 'a' to the increment function by reference.
    increment(a);
    std::cout << "Value of a after incrementing: " << a << std::endl;

    return 0;
}