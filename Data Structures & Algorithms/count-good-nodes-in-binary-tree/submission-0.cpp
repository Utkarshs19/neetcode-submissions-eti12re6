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
    map<int,int> m;
    int ans=0;
    void dfs(TreeNode *root)
    {
        if(root==nullptr)return;

        m[root->val]++;
        dfs(root->left);
        dfs(root->right);
        
        auto it = prev(m.end());
       
        if(it->first==root->val)ans++;
        m[root->val]--;
        if(m[root->val]==0)m.erase(root->val);

    }
    int goodNodes(TreeNode* root) {
        if(root==nullptr)return{};

        dfs(root);

        return ans;
    }
};
