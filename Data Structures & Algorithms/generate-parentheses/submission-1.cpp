class Solution {
public:
    vector<string> ans;
    void helper(int open,int close,int n,string s)
    {
        if(s.length()==2*n)
        {
            ans.push_back(s);
            return;
        }

        if(open<n)
        helper(open+1,close,n,s+'(');

        if(open>close)
        helper(open,close+1,n,s+')');

    }
    vector<string> generateParenthesis(int n) {

        helper(0,0,n,"");
        return ans;
        
    }
};
