#include <iostream>

using namespace std;

void fizzBuzz(int i) {
    if (i % 3 == 0 && i % 5 == 0){
        cout << "FizzBuzz!" << endl;
    } else if (i % 3 == 0) {
        cout << "Fizz!" << endl;
    } else if (i % 5 == 0) {
        cout << "Buzz!" << endl;
    } else {
        cout << i << endl;
    }
}


int main() {
  int num = 3;
  fizzBuzz(num);

  num = 5;
  fizzBuzz(num);

  num = 15;
  fizzBuzz(num);

  num = 7;
  fizzBuzz(num);

  num = 30;
  fizzBuzz(num);
}
