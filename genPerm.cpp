#include <iostream>

void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

void generatePermutations(char str[], int start, int end) {
    if (start == end) {
        std::cout << str << std::endl;
    } else {
        for (int i = start; i <= end; ++i) {
            // Fix a character at position 'start'
            swap(str[start], str[i]);

            // Recursively generate permutations for the remaining characters
            generatePermutations(str, start + 1, end);

            // Backtrack to restore the original order
            swap(str[start], str[i]);
        }
    }
}

int main() {
    std::cout << "Enter a string: ";
    char input[100];
    std::cin >> input;

    int length = 0;
    while (input[length] != '\0') {
        ++length;
    }

    generatePermutations(input, 0, length - 1);

    return 0;
}
