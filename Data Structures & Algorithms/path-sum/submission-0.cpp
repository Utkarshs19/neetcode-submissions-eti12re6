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

    bool ans=false;
    int sum=0;
    int target;
    void helper(TreeNode* root)
    {
        if(!root)return;

        sum+=root->val;
        helper(root->left);
        helper(root->right);
        if(root->left==nullptr && root->right==nullptr)
        {
            if(sum==target)ans=true;
        }
        sum=sum-root->val;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        target=targetSum;
        helper(root);

        return ans;
        
    }
};