class Solution {
public:
    void inOrder(TreeNode* root, vector<int>&result)
    {
        if(!root)
        return;

        inOrder(root->left,result);
        result.push_back(root->val);
        inOrder(root->right,result);
    }

    TreeNode* Balanced(int l,int r, vector<int>&result)
    {
        if(l>r)
        return NULL;
        const int mid=(l+r)/2;
        TreeNode*const  left = Balanced(l,mid-1,result);
        TreeNode*const  right = Balanced(mid+1,r,result);
        return new TreeNode(result[mid],left,right);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>result;
        inOrder(root,result);
        return Balanced(0,result.size()-1,result);
    }
};