#include<bits/stdc++.h>
using namespace std;

int coinChange(int amount, vector<int>& coins) {
    vector<int> dp(amount + 1, 0);
    dp[0] = 1;  // there is only one way to pick 0 amount, which is picking no coins
    
    for (int coin : coins) {
        for (int i = coin; i <= amount; i++) {
            cout << "i " << i << "\n";
            cout << "dp[i] " << dp[i] << "\n";
            cout << "dp[i - coin]" << " " << dp[i - coin] << "\n";
            dp[i] += dp[i - coin];
        }
    }
    return dp[amount];
}

int main() {
    int amount;
    cin >> amount;

    vector<int> coins = {1, 2, 5};
    
    cout << "Number of ways to make change: " << coinChange(amount, coins) << "\n";

    return 0;
}
