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
    vector<int> v;

    void dfs(TreeNode* root)
    {
        if(!root)return;

        dfs(root->left);
        v.push_back(root->val);
        dfs(root->right);
    }
    int k=0;
    void dfs1(TreeNode* root)
    {
        if(!root)return;

        dfs1(root->left);
        root->val=v[k];
        k++;
        dfs1(root->right);
    }

    void recoverTree(TreeNode* root) {

        if(!root)return;

        dfs(root);
        sort(v.begin(),v.end());
        dfs1(root);
        
    }
};