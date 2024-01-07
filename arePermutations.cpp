#include <iostream>
#include <unordered_map>

using namespace std;

bool arePermutations(const string& str1, const string& str2){
  if(str1.length() != str2.length()) { // Base Case
    return false;
  }

  unoredered_map<char, int> charCount;

  for (char ch: str1) {  // Count chars in str1
    charCount[ch]++;
  }

  for (char ch: str2) { // Decrement counts for chars in str2
    if (--charCount[ch] < 0) {
      return false;
    }
  }
  return true; // when all chars in str1 and str2 having the same count.
}

int main() {
  string ex1 = "hello";
  string ex2 = "elolh";

  if (arePermutations(ex1, ex2)) {
    cout << ex1 << " and " << ex2 << " are permutations." << endl;
  }
  else {
    cout << ex1 << " and " << ex2 << " are not permutations." << endl;
  }

  return 0;
}
