#include <iostream>

int main(){
    /**
     * @brief A constant expression integer.
     * 
     * This variable is defined as a constant expression, meaning its value is known at compile-time.
     * It can be used in contexts that require constant expressions, such as array sizes, template parameters, etc.
     * 
     * @note The value of this variable is 5.
     */
    constexpr int x = 5;
    int y = 5;

    // x = 6; // Error: assignment of read-only variable 'x'
    y = 6; // No error

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;

    return 0;
}