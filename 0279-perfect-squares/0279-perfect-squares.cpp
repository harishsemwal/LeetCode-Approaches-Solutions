class Solution {
public:
    int solve(int n, vector<int>& memo) {
        if (n < 0) {
            return INT_MAX;
        }
        if (n == 0) {
            return 0;
        }
        if (memo[n] > 0) {
            return memo[n];
        }
        int minimum = n;
        for (int i = 1; i * i <= n; i++) {
            minimum = min(solve(n - (i * i), memo), minimum);
        }
        memo[n] = minimum + 1;
        return memo[n];
    }

    int numSquares(int n) {
        vector<int> memo(n + 1, 0);
        return solve(n, memo);
    }
};