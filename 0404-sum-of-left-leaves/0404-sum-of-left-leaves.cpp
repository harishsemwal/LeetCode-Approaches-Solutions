/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    void isTraverse(TreeNode *root, vector<int>& st){
        if(root == NULL){
            return;
        }
        if(root->left != NULL && root->left->left == NULL && root->left->right == NULL){
            st.push_back(root->left->val);
        }
        isTraverse(root->left, st);
        isTraverse(root->right, st);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        vector<int> store;
        isTraverse(root, store);
        return accumulate(store.begin(), store.end(), 0);
        
    }
};
