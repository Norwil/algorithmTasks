#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int>& arr, int target){
    int l = 0;
    int r = arr.size() - 1;

    while ( l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return -1;
}


int main() {
    vector<int> sortedArray;
    int n, target;

    // Ask the user for the size of the array
    cout << "Enter the size of the sorted array: ";
    cin >> n;

    // Ask the user to enter the sorted array elements

    cout << "Please Enter the sorted array elements: " << endl;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        sortedArray.push_back(element);
    }

    cout << "Enter the element you want to search for: ";
    cin >> target;

    int result = binarySearch(sortedArray, target);

    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;

}
