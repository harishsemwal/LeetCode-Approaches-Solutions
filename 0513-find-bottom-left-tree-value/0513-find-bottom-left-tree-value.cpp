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
private:
    int bfs(TreeNode*root){
        int ans=root->val;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode* top=q.front();
            q.pop();

            if(top==NULL){
                if(!q.empty()){
                    TreeNode*first=q.front();
                    ans=first->val;
                    q.push(NULL);
                }
                
            }
            else{
                if(top->left){
                    q.push(top->left);
                }
                if(top->right){
                    q.push(top->right);
                }
            }
        }

        return ans;
    }
public:
    int findBottomLeftValue(TreeNode* root) {
        return bfs(root);
    }
};