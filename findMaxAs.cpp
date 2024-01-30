#include <iostream>
#include <algorithm>

// Function to find the maximum number of A's that can be printed
int findMaxAs(int N) {
    if (N < 7) {
        // If N is less than 7, the best strategy is to simply print 'A's
        return N;
    }

    int maxAs = 0;
    // Try breaking the sequence at each point from N-3 to 1 and find the optimal result
    for (int i = N - 3; i > 0; --i) {
        // The current sequence is broken into two parts:
        // i presses to print some 'A's and the rest to multiply this sequence
        int currentAs = (N - i - 1) * findMaxAs(i);
        maxAs = std::max(maxAs, currentAs);
    }

    return maxAs;
}

int main() {
    int N;
    std::cout << "Enter the number of key presses: ";
    std::cin >> N;
    std::cout << "Maximum number of A's that can be produced: " << findMaxAs(N) << std::endl;
    return 0;
}
