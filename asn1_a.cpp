#include <iostream>

long long fib(int number) {
    if (number <= 1) {
        return number;
    }
    return fib(number - 1) + fib(number - 2);
}

int main() {
    for (int i = 0; i <= 10; i++) {
        int index = i * 5;
        std::cout << "F_" << index << " equals " << fib(index) << std::endl;
    }
}