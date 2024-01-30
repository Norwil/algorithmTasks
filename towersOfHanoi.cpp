#include <iostream>

// Function to calculate the minimum number of moves needed to solve Towers of Hanoi
int towersOfHanoi(int discs) {
    // The formula is 2^n - 1 
    return (1 << discs) - 1;
}

int main() {
    int discs;
    std::cout << "Enter the number of discs: ";
    std::cin >> discs;
    std::cout << "Minimum number of moves: " << towersOfHanoi(discs) << std::endl;
    return 0;
}
