class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int>mp;
        vector<int>ans;
        int count = 0;
        for(int i = 0;i<n;i++){
            if(nums[i]%2){
                count++;
            }
            ans.push_back(count);
        }
        int sum = 0;
        mp[0]++;
        for(int i = 0;i<n;i++){
            sum += mp[ans[i]-k];
            mp[ans[i]]++;
        }
        return sum;
    }
};