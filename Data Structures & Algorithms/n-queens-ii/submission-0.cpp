class Solution {
public:
    int ans=0;
    vector<string> v;
    void helper(int i,int n)
    {
        if(i>=n)
        {
            ans++;
            return;
        }

        for(int j=0;j<n;j++)
        {
            bool flag=false;
            for(int k=i-1;k>=0;k--)
            {
                if(v[k][j]=='Q')
                {
                    flag=true;  
                    break;
                }
            }
            for(int k=i-1,a=j-1;k>=0&&a>=0;k--,a--)
            {
                if(v[k][a]=='Q')
                {
                    flag=true;
                    break;
                }
            }
            for(int k=i-1,a=j+1;k>=0&&a<n;k--,a++)
            {
                if(v[k][a]=='Q')
                {
                    flag=true;
                    break;
                }
            }

            if(!flag)
            {
                v[i][j]='Q';
                helper(i+1,n);
                v[i][j]='.';
            }
        }
    }

    int totalNQueens(int n) {

         v.resize(n, string(n, '.'));
        helper(0,n);
        return ans;
        
    }
};