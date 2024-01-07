#include <iostream>
#include <vector>

using namespace std;

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // Partition the array into two halves
        int pivotIndex = partition(arr, low, high);

        // Recursively sort the sub-arrays
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int main() {
    vector<int> numbers = {34, 12, 67, 89, 23, 45, 9, 56};
    int n = numbers.size();

    cout << "Original array: ";
    for (int num : numbers) {
        cout << num << " ";
    }

    quickSort(numbers, 0, n - 1);

    cout << "\nSorted array: ";
    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}
