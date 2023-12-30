class Solution {
public:
    bool makeEqual(vector<string>& words) {
    map<char, int> mp;
    for (auto x : words) {
        for (char y : x) {
            mp[y]++;
        }
    }

    int st_size = words.size();
    for (auto c : mp) {
        if (c.second % st_size != 0) {
            return false;
        }
    }

    return true;
}
};