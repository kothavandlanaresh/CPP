#include <iostream>
#include <array>

// Compile-time example: Factorial calculation using constexpr
constexpr int factorial(int n) {
    return (n <= 1) ? 1 : (n * factorial(n - 1));
}

// Runtime example: Factorial calculation using a loop
int factorial_runtime(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    // Compile-time calculation
    // The factorial function is evaluated at compile-time because it is marked with constexpr.
    // This means the result is computed during compilation, leading to potential performance benefits.
    constexpr int compile_time_factorial = factorial(5);
    std::cout << "Compile-time factorial of 5: " << compile_time_factorial << std::endl;

    // Runtime calculation
    // The factorial_runtime function is evaluated at runtime using a loop.
    // It is not marked with constexpr, so it is computed during the execution of the program.
    //
    // This means the result is computed during the execution of the program.
    int runtime_factorial = factorial_runtime(5);
    std::cout << "Runtime factorial of 5: " << runtime_factorial << std::endl;

    return 0;
}