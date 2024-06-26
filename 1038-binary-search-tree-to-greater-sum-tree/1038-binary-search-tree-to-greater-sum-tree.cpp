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
    int curr = 0;
    TreeNode* bstToGst(TreeNode* root) {
        if(root==NULL) { return NULL; }
        int temp = root->val;
        bstToGst(root->right);
        root->val+=curr;
        curr+=temp;
        bstToGst(root->left);
        return root;
    }
};