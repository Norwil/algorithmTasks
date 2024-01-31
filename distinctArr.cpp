#include <iostream>
#include <set>
#include <vector>

// Function to count distinct elements in an array
int countDistinct(const std::vector<int>& arr) {
    std::set<int> distinctElements(arr.begin(), arr.end());
    return distinctElements.size();
}

int main() {
    std::vector<int> input = {1, 2, 3, 2, 4, 1, 5}; // Example input
    std::cout << "Distinct elements count: " << countDistinct(input) << std::endl;
    return 0;
}
