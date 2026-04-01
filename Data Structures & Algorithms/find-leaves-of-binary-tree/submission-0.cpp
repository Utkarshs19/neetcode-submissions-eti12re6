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

    vector<pair<int,int>> v;

    int helper(TreeNode* root)
    {
        if(!root)return -1;

        int left=helper(root->left);
        int right=helper(root->right);

        int ht=max(left,right)+1;

        v.push_back({ht,root->val});
        return ht;
    }

    vector<vector<int>> findLeaves(TreeNode* root) {

        vector<vector<int>> ans;

        vector<int> temp;

        helper(root);

        sort(v.begin(),v.end());

        int ht=0;

        int i=0;
        while(i<v.size())
        {
            temp.clear();
            while(i<v.size() && v[i].first==ht)
            {
                temp.push_back(v[i].second);
                i++;
            }
            ans.push_back(temp);
          
            ht++;
        }
        
        return ans;
    }
};
