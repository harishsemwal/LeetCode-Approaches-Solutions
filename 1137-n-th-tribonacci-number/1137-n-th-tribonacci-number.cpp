class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;
        
         int trib[38] = {0, 1, 1};
        
         for (int i = 3; i <= n; i++) {
            trib[i] = trib[i - 1] + trib[i - 2] + trib[i - 3];
         }
        return trib[n];
    }
};