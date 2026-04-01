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
    map<TreeNode*,int> m;
    
    int helper(TreeNode* root)
    {
        if(!root)return 0;

        if(m.count(root))return m[root];

        int x=0,y=0;

        x+=root->val;
        if(root->left)
        {
            x+=helper(root->left->left);
            x+=helper(root->left->right);
        }
        if(root->right)
        {
            x+=helper(root->right->left);
            x+=helper(root->right->right);
        }

        y=helper(root->left)+helper(root->right);
        
        return m[root]=max(x,y);

    }

    int rob(TreeNode* root) {
        
        return helper(root);

    }
};