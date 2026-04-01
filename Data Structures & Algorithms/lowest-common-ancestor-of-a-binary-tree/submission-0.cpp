/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    map<TreeNode*,TreeNode*> m;

    void helper(TreeNode* root)
    {
        if(!root)return;

        if(root->left)
        {
            m[root->left]=root;
            helper(root->left);
        }
        if(root->right)
        {
            m[root->right]=root;
            helper(root->right);
        }
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        helper(root);
        set<TreeNode*> st;

        while(p!=root)
        {
            st.insert(p);
            p=m[p];
        }
        st.insert(root);

        while(q!=root)
        {
            if(st.count(q))return q;
            q=m[q];
        }
        return root;
    }
};