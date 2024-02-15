class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()<3) return -1;
        
        long long sum=0;
        for(int i=0; i<nums.size()-1; i++){
            sum+=nums[i];

        }
        int i=nums.size()-1;
        while(i>=2){
            if(nums[i]<sum){
                return sum+nums[i];
            }else
            {
                i--;
                sum -=nums[i];
            }
        }
        return -1;
        }
};