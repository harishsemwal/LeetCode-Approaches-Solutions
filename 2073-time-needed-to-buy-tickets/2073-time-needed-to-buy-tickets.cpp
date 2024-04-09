#include <vector>
#include <queue>
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int t = tickets[k], res = 0;
        for(int i=0; i < tickets.size(); i++){
            if(i<=k){
                res += min(tickets[i], t);
            }
            else{
                res += min(tickets[i], t-1);
            }
        }
        return res;
//         queue<int> que;
//         for(int i = 0; i < n; i++){
//             que.push(tickets[i]);
//         }
        
//         int maintain = 0;
//         while(!que.empty()){
//             int num = que.front();
//             que.pop();
//             maintain += 1;
//             num--;
//             if (maintain > k && num == 0)
//                 break;
//             if (maintain <= k && num > 0)
//                 que.push(num);
//         }
//         return maintain;
        
    }
};
