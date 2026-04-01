class Solution {
public:
    vector<vector<string>> ans;
    map<pair<int,int>,int> m;
    vector<string> v;

    void helper(int row,int n)
    {
        if(row==n)
        {
            ans.push_back(v);
            return;
        }
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            bool flag=true;
            for(int j=row-1;j>=0;j--)
            {
                if(m.count({j,i}))flag=false;
            }
            if(!flag)continue;
            for(int j=row-1,k=i-1;j>=0&&k>=0;j--,k--)
            {
                if(m.count({j,k}))flag=false;
            }
            if(!flag)continue;
            for(int j=row-1,k=i+1;j>=0&&k<n;j--,k++)
            {
                if(m.count({j,k}))flag=false;
            }
            if(!flag)continue;

            m[{row,i}]++;
            s[i]='Q';
            v.push_back(s);
            helper(row+1,n);
            v.pop_back();
            s[i]='.';
            m.erase({row,i});
        }
        return;
    }

    vector<vector<string>> solveNQueens(int n) {

        helper(0,n);
        return ans;
    }
};
