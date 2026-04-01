class Solution {
public:
    int m,n;
    vector<vector<int>> dp;

    int helper(int i,int j)
    {
        if(i==m-1 && j==n-1)return 1;

        if(i<0 || i>=m || j<0 || j>=n)return 0;

        if(dp[i][j]!=-1)return dp[i][j];

        int right=helper(i,j+1);
        int down=helper(i+1,j);

        return dp[i][j]=right+down;
    }

    int uniquePaths(int m, int n) {
        this->m=m;
        this->n=n;

        dp.resize(100,vector<int>(100,-1));
        return helper(0,0);
        
    }
};
