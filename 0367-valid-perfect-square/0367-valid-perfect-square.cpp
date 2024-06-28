class Solution {
public:
    bool isPerfectSquare(int num) {
        long long val = 0;
        if(num <= 3){
            return true;
        }
        while(val < num){
            if((val*val)==num){
                return true;
            }
            val++;
        }
        return false;
    }
};