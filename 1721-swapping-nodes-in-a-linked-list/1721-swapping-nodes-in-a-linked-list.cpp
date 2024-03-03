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
        // ek badhiya approach
        ListNode *prev = head;
        ListNode *curr = head;
        ListNode *curr2 = head;
        
        while(--k){
            curr = curr->next;
            curr2 = curr2->next;
        }
        
        while(curr2->next != NULL){
            curr2 = curr2->next;
            prev = prev->next;
           
        }
        
        swap(prev->val, curr->val);
        return head;
    }
};