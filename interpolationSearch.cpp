#include <iostream>
#include <vector>

using namespace std;

int interpolationSearch(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high && target >= arr[low] && target <= arr[high]) {
        if (low == high) {
            if (arr[low] == target)
                return low;
            return -1;  // Element not found
        }

        // Calculate the position using interpolation formula
        int pos = low + ((target - arr[low]) * (high - low) / (arr[high] - arr[low]));

        if (arr[pos] == target)
            return pos;

        if (arr[pos] < target)
            low = pos + 1;
        else
            high = pos - 1;
    }

    return -1;  // Element not found
}

int main() {
    vector<int> sortedArray = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int targetElement = 6;

    int result = interpolationSearch(sortedArray, targetElement);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}
