class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> result;
        unordered_map<int, int> mp;

        for (auto x : nums) {
            mp[x]++;
        }

        while (!mp.empty()) {
            vector<int> temp;
            for (auto it = mp.begin(); it != mp.end();) {
                temp.push_back(it->first);
                it->second--;
                if (it->second == 0) {
                    it = mp.erase(it);
                } else {
                    it++;
                }
            }
            result.push_back(temp);
        }

        return result;
    }
};