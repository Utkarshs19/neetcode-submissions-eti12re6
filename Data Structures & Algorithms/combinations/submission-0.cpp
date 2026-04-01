class Solution {
public:
    vector<vector<int>> ans;

    void helper(int x,int n,int k,vector<int> &v)
    {
        if(v.size()==k)
        {
            ans.push_back(v);
            return;
        }
        if(x>n)return;
        {
            if(v.size()>k)
            return;
        }

        v.push_back(x);
        helper(x+1,n,k,v);
        v.pop_back();
        helper(x+1,n,k,v);
    }

    vector<vector<int>> combine(int n, int k) {

        vector<int> v;
        int x=1;
        helper(x,n,k,v);
        return ans;
        
    }
};