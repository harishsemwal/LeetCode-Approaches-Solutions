class Solution {
public:
    int maxScore(string s) {
    int n = s.size();
    int result = 0;
    vector<int> zeros(n + 1, 0);
    vector<int> ones(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        zeros[i] = zeros[i - 1] + (s[i - 1] == '0' ? 1 : 0);
        ones[i] = ones[i - 1] + (s[i - 1] == '1' ? 1 : 0);
    }
    for (int i = 1; i < n; i++) {
        int countZero = zeros[i];
        int countOne = ones[n] - ones[i];
        result = max(result, countZero + countOne);
    }

    return result;
    }
};