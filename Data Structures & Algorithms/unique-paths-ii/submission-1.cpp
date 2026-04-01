class Solution {
public:
    int n,m;
    vector<vector<int>> dp;

    int helper(int i,int j,vector<vector<int>> &grid)
    {
        if(i==n-1 && j==m-1){
            if(grid[i][j]==1)return 0;
            return 1;
        }

        if(i<0 ||i>=n || j<0 ||j>=m || grid[i][j]==1)return 0;

        if(dp[i][j]!=-1)return dp[i][j];

        int right=helper(i,j+1,grid);
        int down=helper(i+1,j,grid);

        return dp[i][j]=right+down;

    }

    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        
        n=grid.size();
        m=grid[0].size();

        dp.resize(101,vector<int>(101,-1));

        return helper(0,0,grid);


    }
};