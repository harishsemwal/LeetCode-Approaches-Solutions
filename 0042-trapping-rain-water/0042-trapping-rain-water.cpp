class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0;
        int n = height.size();
        for(int i = 1; i < n - 1; i++){
            int lmax = height[i];
            for(int j = 0; j < i; j++){
                lmax = max(lmax, height[j]);
            }
            
            int rmax = height[i];
            for(int j = i + 1; j < n; j++){
                rmax = max(rmax, height[j]);
            }
            
            water += min(lmax, rmax) - height[i];
        }
        return water;
    }
};