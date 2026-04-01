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
    int ans=0;
    int low,high;

    void helper(TreeNode* root)
    {
        if(!root)return;

        if(root->val>=low && root->val<=high)ans+=root->val;
        helper(root->left);
        helper(root->right);
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        
        this->low=low;
        this->high=high;

        helper(root);

        return ans;
        
    }
};