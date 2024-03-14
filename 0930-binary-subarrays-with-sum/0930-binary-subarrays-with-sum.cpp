class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int s = nums.size();
        int n = 0;
        int m = 0;
        int c = 0;
        
        for(int i = 0; i < s; i++){
            if(nums[i] == 1){
                goal--;
                c = 0;
            }
        
        while(goal == 0 && m <= i){
            goal += nums[m];
            m++;
            c++;
            
            if(m > i-goal + 1){
                break;
            }
        }
        
        while(goal < 0){
            goal += nums[i];
            m++;
        }
        n += c;
    }
    return n;
    }
};