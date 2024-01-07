#include <iostream>
#include <vector>
#include <algorithm>

//excluded namespace std for best practices.

bool is_sorted(const std::vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

void bogo_sort(std::vector<int>& arr) {
    while (!is_sorted(arr)) {
        std::random_shuffle(arr.begin(), arr.end());
    }
}

int main() {
    std::vector<int> my_array = {42, 17, 8, 91, 24, 33, 55, 76, 29, 10, 63};
    
    std::cout << "Unsorted array:";
    for (const auto& element : my_array) {
        std::cout << " " << element;
    }
    std::cout << std::endl;

    bogo_sort(my_array);

    std::cout << "Sorted array:";
    for (const auto& element : my_array) {
        std::cout << " " << element;
    }
    std::cout << std::endl;

    return 0;
}
