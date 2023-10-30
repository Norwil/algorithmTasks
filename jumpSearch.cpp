#include <iostream>
#include <cmath>

using namespace std;

int jumpSearch(int a[], int n, int key) {
    int i, start = 0, end = sqrt(n);
    while (a[end] < key && start < n) {
        start = end;
        end = end + sqrt(n);
        if (end > n - 1) end = n;
    }
    for (i = start; i < end; i++) {
        if (a[i] == key) {
            return i;
        }
    }
    return -1;
}


int main()
{
    int a[] = { 5, 15, 25, 33, 37, 40, 50, 150, 151, 155, 170, 190, 250 };
    int key = 151;
    int n = sizeof(a) / sizeof(a[0]);
    int result = jumpSearch(a, n, key);
    if (result == -1) {
        cout << "Element is not in the array.";
    }
    else {
        cout << "Element found at position: " << result-1;
    }
    return 0;
}

