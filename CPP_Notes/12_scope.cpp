#include <iostream>


/**
 * @file scope.cpp
 * @brief Demonstrates block scope in C++.
 *
 * This program shows how variables with the same name can exist in different scopes.
 * 
 * In the first block, an integer variable `x` is declared and initialized to 5.
 * This variable is only accessible within this block.
 * 
 * After the block ends, another integer variable `x` is declared and initialized to 6.
 * This variable is separate from the first `x` and is accessible in the outer scope.
 * 
 * The program outputs the value of `x` in both scopes to illustrate the concept of block scope.
 */
int main(){

    {
        int x = 5;
        std::cout << "x: " << x << std::endl;
    }

    //std::cout << x << std::endl;  // Error: 'x' is out of scope

    int x = 6;

    std::cout << "x: " << x << std::endl;
}