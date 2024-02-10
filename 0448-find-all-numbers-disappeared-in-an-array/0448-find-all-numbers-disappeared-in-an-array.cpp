class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        
        set<int> st(nums.begin(), nums.end());
        
        for(int i = 1; i <= n; i++){
            if(st.find(i) == st.end()){
                result.push_back(i);
            }
        }
        return result;
    }
};