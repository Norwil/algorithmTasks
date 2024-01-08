#include <iostream>
#include <string>

using namespace std;

string numberToWords(int num) {
    if (num == 0) {
        return "Zero";
    }

    const string below_20[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                               "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

    const string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    const string thousands[] = {"", "Thousand", "Million"};

    string result;
    int i = 0;

    while (num > 0) {
        if (num % 1000 != 0) {
            if (!result.empty()) {
                result = below_20[num % 1000] + " " + thousands[i] + " " + result;
            } else {
                result = below_20[num % 1000] + " " + thousands[i];
            }
        }
        num /= 1000;
        i++;
    }

    return result;
}

int main() {
    int num;
    cout << "Enter an integer (up to one million): ";
    cin >> num;

    if (num < 0 || num > 1000000) { // Base Case
        cout << "Please enter a valid number in the range [0, 1000000]." << endl;
        return 1;
    }

    string result = numberToWords(num);
    cout << "English representation: " << result << endl;

    return 0;
}
