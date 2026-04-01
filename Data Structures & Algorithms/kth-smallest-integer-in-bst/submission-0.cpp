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
    priority_queue<int> pq;
    int k;

    void dfs(TreeNode* root)
    {
        if(root==nullptr)return;
        
        pq.push(root->val);
        if(pq.size()>k)pq.pop();

        dfs(root->left);
        dfs(root->right);

    }
    int kthSmallest(TreeNode* root, int k) {

        this->k=k;

        if(root==nullptr)return -1;

        dfs(root);

        return pq.top();

        
    }
};
