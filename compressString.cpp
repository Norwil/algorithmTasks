#include <iostream>
#include <string>

using namespace std;

string compressString(string str) {
    int n = str.length();
    if (n < 1) return str;

    string compressed;
    
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        compressed += str[i] + to_string(count);
    }

    return compressed;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string compressed = compressString(str);
    cout << "Compressed string: " << compressed << endl;

    return 0;
}
