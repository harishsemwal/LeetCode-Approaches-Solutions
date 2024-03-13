class Solution {
public:
    int pivotInteger(int n) {
        int x = (n*(n+1))/2;
        int y = sqrt(x);
        if(y*y==x) return y;
        else return -1;
    }
};