#include <iostream>
#include <vector>

// Function to calculate the number of ways to represent n cents
int countWaysToMakeChange(int n) {
    // Initialize an array to store the number of ways to make each amount
    std::vector<int> dp(n + 1, 0);

    // There is one way to make 0 cents (with no coins)
    dp[0] = 1;

    // The coins available
    int coins[] = {1, 5, 10, 25};

    // For each coin, update the dp array
    for (int coin : coins) {
        for (int amount = coin; amount <= n; ++amount) {
            dp[amount] += dp[amount - coin];
        }
    }

    // Return the number of ways to make n cents
    return dp[n];
}

int main() {
    int n;
    std::cout << "Enter the amount in cents: ";
    std::cin >> n;
    std::cout << "Number of ways to make change for " << n << " cents: " << countWaysToMakeChange(n) << std::endl;
    return 0;
}
