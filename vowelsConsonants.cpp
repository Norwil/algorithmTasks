#include <iostream>
#include <string>

// Function to count vowels and consonants in a given string
void countVowelsAndConsonants(const std::string &str) {
    int vowels = 0, consonants = 0;
    for (char c : str) {
        // Convert to lowercase for comparison
        c = tolower(c);
        // Check if the character is a vowel
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            ++vowels;
        }
        // Check if the character is a consonant
        else if (c >= 'a' && c <= 'z') {
            ++consonants;
        }
    }
    std::cout << "Vowels: " << vowels << "\nConsonants: " << consonants << std::endl;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    getline(std::cin, input);
    countVowelsAndConsonants(input);
    return 0;
}
