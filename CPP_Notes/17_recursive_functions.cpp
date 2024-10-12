#include <iostream>

// Function to calculate factorial using recursion
int factorial(int n) {
    // Base case: if n is 0, the factorial is 1
    if (n == 0) {
        return 1;
    }
    // Recursive case: n * factorial of (n-1)
    return n * factorial(n - 1);
}

/*
 * Recursive functions are functions that call themselves in order to solve a problem.
 * They are particularly useful for problems that can be broken down into smaller, 
 * similar sub-problems. A classic example of a problem that can be solved using 
 * recursion is calculating the factorial of a number.
 *
 * The factorial of a number n (denoted as n!) is the product of all positive integers 
 * less than or equal to n. For example, 5! = 5 * 4 * 3 * 2 * 1 = 120.
 *
 * In the factorial function above, we use a base case to stop the recursion when n 
 * reaches 0. This is crucial to prevent infinite recursion and eventual stack overflow.
 * The recursive case reduces the problem size by calling the factorial function with 
 * (n-1) until it reaches the base case.
 */

int main() {
    int number = 5;
    std::cout << "Factorial of " << number << " is " << factorial(number) << std::endl;
    return 0;
}

/*
 * Tips and Tricks:
 * 1. Always define a base case to stop the recursion.
 * 2. Ensure that each recursive call reduces the problem size.
 * 3. Be mindful of stack overflow for deep recursion. Consider using iterative solutions 
 *    or tail recursion optimization if supported by the compiler.
 * 4. Use recursion for problems that have a natural recursive structure, such as tree 
 *    traversals, combinatorial problems, and divide-and-conquer algorithms.
 */