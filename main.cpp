#include <iostream>

void fib(int n) {
    if (n <= 0) {
        return;
    }
    
    long long first = 0;
    long long second = 1;
    
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            std::cout << first;
        } else if (i == 2) {
            std::cout << ", " << second;
        } else {
            long long next = first + second;
            std::cout << ", " << next;
            first = second;
            second = next;
        }
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    
    int n = 10;
    std::cout << "Первые " << n << " чисел Фибоначчи: ";
    fib(n);
    
    return 0;
}