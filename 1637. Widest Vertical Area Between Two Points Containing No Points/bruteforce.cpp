// My bruteforce Approach
class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        vector<int> st;
        for(int i = 0; i < points.size(); i++){
            st.push_back(points[i][0]);
        }
        int ans = 0;
        for(int i = 1; i < st.size(); i++){
            ans = max(ans, st[i]-st[i-1]);
        }
        return ans;
    }
};
