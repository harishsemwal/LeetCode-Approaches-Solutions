/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> vt;
        ListNode *nums = head;
        
        while(nums != NULL){
            vt.push_back(nums->val);
            nums = nums->next;
        }
        
        int n = vt.size();
        int start = k - 1;
        int end = n - k;
        
        if(start == end) 
            return head;
        
        if(vt[start] != vt[end]){
            swap(vt[start], vt[end]);
        }
        
        ListNode *result = new ListNode(vt[0]);
        ListNode *ans = result;
           
        for(int i = 1; i < n; i++){
            result->next = new ListNode(vt[i]);
            result = result->next;
        }
        
        return ans;
    }
};