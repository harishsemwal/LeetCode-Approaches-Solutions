class Solution {
private:
    int akash(int n){
        int ct = 0;
        while(n > 1){
            if(n & 1) n = n * 3 + 1;
            else n /= 2;
            ct++;
        }
        return ct;
    }
public:
    int getKth(int lo, int hi, int k) {
        vector<vector<int>> po;

        for(int i = lo;i <= hi;i++){
            po.push_back({akash(i),i});
        }
        sort(po.begin(),po.end());

        return po[k - 1][1];
    }
};
