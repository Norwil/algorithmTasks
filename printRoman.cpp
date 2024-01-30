#include <iostream>
#include <vector>
#include <utility>

// Function to convert an integer to a Roman numeral
void printRoman(int number) {
    std::vector<std::pair<int, std::string>> roman{
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    std::string result;
    for (const auto &value : roman) {
        while (number >= value.first) {
            result += value.second;
            number -= value.first;
        }
    }
    
    std::cout << result << std::endl;
}

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    printRoman(number);
    return 0;
}
