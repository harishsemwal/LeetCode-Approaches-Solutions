class Solution 
{
public:
    int longestSubarray(vector<int>& v, int limit) 
    {
        int n = v.size();
        int st = 0, ans = 0, en = 0;
        multiset<int> s;
        
        while (en < n) 
        {
            s.insert(v[en]); 
            int mini = *s.begin();
            int maxi = *s.rbegin();
            
            if (maxi - mini <= limit) 
            {
                ans = max(ans, en - st + 1);
                en++;
            } else 
            {
                s.erase(s.find(v[st]));
                st++;
                en++;
            }
        }
        return ans;
    }
};