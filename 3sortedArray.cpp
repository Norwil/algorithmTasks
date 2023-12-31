#include <iostream>
#include <vector>
using namespace std;

/* write a function that takes three sorted arrays, finds and prints all common elements of these arrays. try to do it with a single loop */


vector<int> commonElements(int arrA[], int arrB[], int arrC[], int sizeA, int sizeB, int sizeC) {
    int i = 0, j = 0, k = 0;
    vector<int> commonNumList;

    while (i < sizeA && j < sizeB && k < sizeC) {
        if (arrA[i] == arrB[j] && arrB[j] == arrC[k]) {
            commonNumList.push_back(arrA[i]);
            i++;
            j++;
            k++;
        }
        else if (arrA[i] < arrB[j]) {
            i++;
        }
        else if (arrB[j] < arrC[k]) {
            j++;
        }
        else {
            k++;
        }
    }

    return commonNumList;
}

void display(const vector<int>& result) {
    cout << "Common elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int arrA[] = { 1, 2, 3, 4, 5, 9 };
    int sizeA = sizeof(arrA) / sizeof(int);

    int arrB[] = { 1, 2, 3, 4, 5,7,8,9 };
    int sizeB = sizeof(arrB) / sizeof(int);

    int arrC[] = { 1, 3, 5, 9 };
    int sizeC = sizeof(arrC) / sizeof(int);

    vector<int> commonList = commonElements(arrA, arrB, arrC, sizeA, sizeB, sizeC);
    display(commonList);

    return 0;
}
