#include <iostream>
#include <vector>

using namespace std;

int countWaysToClimbStairs(int n) {
    if (n <= 2) {
        return n;
    }

    vector<int> ways(n + 1, 0);
    ways[1] = 1;
    ways[2] = 2;
    ways[3] = 4;

    for (int i = 4; i <= n; ++i) {
        ways[i] = ways[i - 1] + ways[i - 2] + ways[i - 3];
    }

    return ways[n];
}

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    int ways = countWaysToClimbStairs(n);

    cout << "Number of ways to climb " << n << " stairs: " << ways << endl;

    return 0;
}
