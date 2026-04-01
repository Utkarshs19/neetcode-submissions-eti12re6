class Solution {
public:
    void dfs(int i,int j,vector<vector<char>> &grid)
    {
        grid[i][j]='T';
        int n=grid.size();
        int m=grid[0].size();

        if(i+1<n  && grid[i+1][j]=='O')
        dfs(i+1,j,grid);

        if(i-1>=0 && grid[i-1][j]=='O')
        dfs(i-1,j,grid);

        if(j+1<m && grid[i][j+1]=='O')
        dfs(i,j+1,grid);

        if(j-1>=0 && grid[i][j-1]=='O')
        dfs(i,j-1,grid);


    }
    void solve(vector<vector<char>>& grid) {

        int n=grid.size();
        int m=grid[0].size();


        for(int i=0;i<m;i++)
        {
            if(grid[0][i]=='O')dfs(0,i,grid);
        }

        for(int i=0;i<m;i++)
        {
            if(grid[n-1][i]=='O')dfs(n-1,i,grid);
        }

        for(int i=0;i<n;i++)
        {
            if(grid[i][0]=='O')dfs(i,0,grid);
        }

        for(int i=0;i<n;i++)
        {
            if(grid[i][m-1]=='O')dfs(i,m-1,grid);
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='T')grid[i][j]='O';
                else grid[i][j]='X';
            }
        }
        
    }
};
