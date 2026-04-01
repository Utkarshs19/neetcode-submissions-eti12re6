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
    
    void dfs(TreeNode* root,int sum)
    {
        if(!root)
        {   
            return;
        }

        sum=sum*10+(root->val);
        dfs(root->left,sum);
        dfs(root->right,sum);

        if(root->left==nullptr && root->right==nullptr)
        ans+=sum;

    }

    int sumNumbers(TreeNode* root) {
        
        if(!root)return 0;

        dfs(root,0);

        return ans;
        

    }
};