class Solution {
public:
    string getPermutation(int n, int k) {
        vector<char> str;
        string nums;
        for(int i = 0; i < n; i++){
            nums = nums + to_string(i+1);
        }
        for(int i = 0; i < nums.size(); i++){
            str.push_back(nums[i]);
        }
        string ans = "";
        do{
            if(k == 1){
                for(int i = 0; i < str.size(); i++){
                    ans += str[i];
                }
            }
            k--;
        }while(next_permutation(str.begin(), str.end()));
        return ans;
    }
};