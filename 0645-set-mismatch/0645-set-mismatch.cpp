class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n+1, 0);
        int missing = 0;
        int duplicate = 0;
        for(int i = 0; i < n; i++){
            v[nums[i]]++;
        }
        // v = { 1, 2, 1 }
        for(int i = 0; i < v.size(); i++){
            if(v[i] == 2){
                duplicate = i;
            }
            if(v[i] == 0){
                missing = i;
            }
        }
        return {duplicate, missing};
    }
};