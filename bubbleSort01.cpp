#include <iostream>
using namespace std;

int swap(int a[], int x, int y) {
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;

}

int bubble(int a[], int n) {
    int i = n - 1;
    while (i > 0) {
        if (a[i] < a[i - 1]) {
            swap(a, i, i - 1);
        }
        i--;
    }
}

int bblSort(int a[], int n) {
    int i = 0;
    while (i < n - 1) {
        bubble(a, n);
        i++;
    }
}

void show(int a[], int n) {
    int i = 0;
    while (i < n) {
        cout << a[i] << ", ";
        i++;
    }
    cout<<endl;
}

int main()
{
    int arr[] = { 2,0,333,7,5,425,252 };
    int size = sizeof(arr) / sizeof(int);
    cout << "Unsorted array list: " << endl;
    show(arr, size);
    bblSort(arr, size);
    cout << "Sorted array list: " << endl;
    show(arr, size);

    return 0;
}

