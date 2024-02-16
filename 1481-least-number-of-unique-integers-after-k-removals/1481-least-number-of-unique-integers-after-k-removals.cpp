class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> freq;
        for (int num : arr) {
            freq[num]++;
        }
        
        priority_queue<int, vector<int>, greater<int>> pq;
        for (auto& pair : freq) {
            pq.push(pair.second);
        }
        
        while (k > 0 && !pq.empty()) {
            int count = pq.top();
            pq.pop();
            
            if (count <= k) {
                k -= count;
            } else {
                pq.push(count - k);
                k = 0;
            }
        }
        
        return pq.size();
    }
};