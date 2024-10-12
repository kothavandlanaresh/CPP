#include <iostream>

/**
 * @brief Entry point of the program.
 * 
 * This function demonstrates the behavior of modifying a constant integer
 * through a pointer cast. It declares a constant integer `x` with a value of 5,
 * then creates a pointer `p` that points to `x` by casting away the constness.
 * The value pointed to by `p` is then modified to 6. Finally, the program
 * prints the value of `x` to the standard output.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main() {
    const int x = 5;
    int *p = (int*)&x;
    *p = 6;
    std::cout << x << std::endl;

    




    return 0;
}