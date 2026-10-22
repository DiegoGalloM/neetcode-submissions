class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n+1, 0);
        dp[0] = dp[1] = 1;
        for(int a = 2; a < n+1; a++){
            for(int i = 0; i < a; i++){
                dp[a] += dp[i] * dp[a-i-1];
            }
        }
        return dp[n];
    }
};
