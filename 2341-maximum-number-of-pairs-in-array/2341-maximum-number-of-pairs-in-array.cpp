class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int count = 0;
        int remaining = 0;
        for(auto x: mp){
            if(x.second % 2 == 0){
                count += (x.second / 2);
            }
            else{
                if(x.second > 1){
                    count += (x.second / 2);
                }
                remaining += 1;
            }
        }
        return {count, remaining};
    }
};