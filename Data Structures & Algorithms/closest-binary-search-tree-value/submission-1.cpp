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
    int ans=INT_MAX;
    double val=1000000000.0;
    double target;

    void helper(TreeNode* root)
    {
        if(!root)return;

        double x=1.0;
        x=x*root->val;

        if(val>abs(x-target))
        {
           val=abs(x-target);
           ans=root->val;
        }

        helper(root->left);
        helper(root->right);
    }

    int closestValue(TreeNode* root, double target) {
        
        this->target=target;
        helper(root);

        return ans;

    }
};
