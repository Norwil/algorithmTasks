#include <iostream>
#include <cmath>

using namespace std;

// Sorting the elements
void combSort(int a[], int n, int gap, bool isSwapped) {
    while (gap > 1 || isSwapped) {
        gap = (gap = floor(gap / 1.3)) < 1 ? 1 : gap;
        isSwapped = false;

        for (int i = 0; i < n - gap; i++) {
            isSwapped = (a[i] > a[i + gap]) ? swap(a[i], a[i + gap]), true : false;
        }
    }
}

// Displaying the elements
void display(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << ", ";
    }
    cout << endl;
}

int main()
{
    // Initialization.
    int a[] = { 23,21,55,110,1,555,26 };
    int n = sizeof(a) / sizeof(a[0]);
    int gap = n;
    bool isSwapped = true;

    cout << "Unsorted array: " << endl;
    display(a, n);
    cout << "Sorted array: " << endl;
    combSort(a, n, gap, isSwapped);
    display(a, n);

    return 0;
}

