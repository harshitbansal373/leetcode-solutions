// Problem link: https://leetcode.com/problems/coin-change/

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        const int INF = 1e9;
        vector<int> dp(amount + 1, INF);
        dp[0] = 0;
        for (int x = 1; x <= amount; ++x) {
            for (auto &c : coins) {
                if (x - c >= 0 && dp[x - c] + 1 < dp[x])
                    dp[x] = dp[x - c] + 1;
            }
        }
        return (dp[amount] == INF ? -1 : dp[amount]);
    }
};
