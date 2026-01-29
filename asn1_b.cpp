#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


std::string add_numbers(std::string num1, std::string num2) {
    std::string sum = "";
    int num1_length = num1.length() - 1;
    int num2_length = num2.length() - 1;
    int carry = 0;
    while (num1_length >= 0 || num2_length >= 0 || carry) {
        int digit1 = (num1_length >= 0) ? num1[num1_length--] - '0' : 0;
        int digit2 = (num2_length >= 0) ? num2[num2_length--] - '0' : 0;
        int currentSum = digit1 + digit2 + carry;
        sum += std::to_string(currentSum % 10);
        carry = currentSum / 10;          
    }
    std::reverse(sum.begin(), sum.end());
    return sum;
}

std::string fib_b_helper(int number, int current, std::string prev_second, std::string prev_first) {
    if (number == 0) {
        return "0";
    } else if (number == 1) {
        return "1";
    }
    if (current == number) {
        return add_numbers(prev_second, prev_first);
    }
    return fib_b_helper(number, current + 1, prev_first, add_numbers(prev_second, prev_first));
}

int main() {
    for (int i = 0; i <= 25; i++) {
        int index = i * 20;
        std::cout << "F_" << index << " equals " << fib_b_helper(index, 2, "0", "1") << std::endl;
    }
    return 0;

}