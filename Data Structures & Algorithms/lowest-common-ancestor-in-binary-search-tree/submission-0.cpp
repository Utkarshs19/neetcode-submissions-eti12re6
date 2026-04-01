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
    map<TreeNode*,TreeNode*> m;
    void dfs(TreeNode* root,TreeNode* par)
    {
        if(!root)return;
        if(root->left)
        m[root->left]=par;
        if(root->right)
        m[root->right]=par;

        dfs(root->left,root->left);
        dfs(root->right,root->right);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        m[root]=nullptr;
        dfs(root,root);

        vector<TreeNode*> v1,v2;

        while(p!=nullptr)
        {
            v1.push_back(p);
            p=m[p];
        }
        while(q!=nullptr)
        {
            v2.push_back(q);
            q=m[q];
        }

        for(int i=0;i<v1.size();i++)
        {
            for(int j=0;j<v2.size();j++)
            {
                if(v1[i]==v2[j])return v1[i];
            }
        }

        return nullptr;

    }
};
