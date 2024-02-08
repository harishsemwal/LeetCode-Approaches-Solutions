// Hint : sabse pehli number Likhna hai fir uska tree banana hai or check kerna hai ki sab tree ke jitne bhi maximum squre bangi to unka minimum nikalana hai...
    
// jaise 12 hai to 12 ko hem : one ka square kerkai 12 baar bhi likh sake hain.
//     12 ko 3 ka squre kekai or fir 1 ka 3 baar square krkai bhi likh sakte hain....
    
// Humko always minimum lene hai....
//     code i = 1 se isliaa chalaya kyunki khud 12 per check kekai fyda nahi hai n ki value already 12 hai....

class Solution {
public:
    int solve(int n, vector<int> &memo){
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

