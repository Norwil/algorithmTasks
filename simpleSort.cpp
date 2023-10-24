
#include <iostream>
#include <cstdlib>
#define MAX 100
using namespace std;


int randNums(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand();
    }
    return arr[MAX];
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int simpleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[MAX];
}



int main()
{
    int n;
    int arr[MAX];
    cout << "Enter a number N: " << endl;
    cin >> n;
    randNums(arr, n);
    display(arr, n);
    simpleSort(arr, n);
    cout << "Sorted Array" << endl;
    display(arr, n);
    
    return 0;
}

