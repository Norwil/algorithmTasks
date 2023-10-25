#include <iostream>

using namespace std;

void swap(int arr[], int x, int y) {
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

int findLowest(int arr[], int s, int e) {
    int i = s;
    int j = i;
    while (i <= e) {
        if (arr[i] < arr[j]) {
            j = i;
        }
        i++;
    }
    return j;
}

void selectionSort(int arr[], int n) {
    int i = 0;
    while (i < n) {
        int j = findLowest(arr, i, n - 1);
        swap(arr, i, j);
        i++;
    }
}


void display(int arr[], int n) {
    int i = 0;
    while (i < n) {
        cout << arr[i] << ", ";
        i++;
    }
    cout << endl;
}

int main()
{
    int arr[] = { 102, 12, 193, 1932, 192, 11, 293, 39, 239 };
    int size = sizeof(arr) / sizeof(int);

    display(arr, size);
    selectionSort(arr, size);
    display(arr, size);

    return 0;
}
