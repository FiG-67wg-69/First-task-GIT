#include <iostream>

int fib(int n) {
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    int n = 10;
    int result = fib(n);
    std::cout << "fib(" << n << ") = " << result << std::endl;

    return 0;
}