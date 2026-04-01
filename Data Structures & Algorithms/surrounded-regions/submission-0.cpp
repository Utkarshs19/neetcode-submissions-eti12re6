class Solution {
public:
    void dfs(int i,int j,vector<vector<char>> &grid,vector<vector<int>> &vis)
    {
        vis[i][j]=1;
        int n=grid.size();
        int m=grid[0].size();

        if(i+1<n && !vis[i+1][j] && grid[i+1][j]=='O')
        dfs(i+1,j,grid,vis);

        if(i-1>=0 && !vis[i-1][j] && grid[i-1][j]=='O')
        dfs(i-1,j,grid,vis);

        if(j+1<m && !vis[i][j+1] && grid[i][j+1]=='O')
        dfs(i,j+1,grid,vis);

        if(j-1>=0 && !vis[i][j-1] && grid[i][j-1]=='O')
        dfs(i,j-1,grid,vis);


    }
    void solve(vector<vector<char>>& grid) {

        int n=grid.size();
        int m=grid[0].size();

        vector<vector<int>> vis(n,vector<int>(m,0));

        for(int i=0;i<m;i++)
        {
            if(grid[0][i]=='O'){if(!vis[0][i])dfs(0,i,grid,vis);}
        }

        for(int i=0;i<m;i++)
        {
            if(grid[n-1][i]=='O'){if(!vis[n-1][i])dfs(n-1,i,grid,vis);}
        }

        for(int i=0;i<n;i++)
        {
            if(grid[i][0]=='O'){if(!vis[i][0])dfs(i,0,grid,vis);}
        }

        for(int i=0;i<n;i++)
        {
            if(grid[i][m-1]=='O'){if(!vis[i][m-1])dfs(i,m-1,grid,vis);}
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]!=0)
                grid[i][j]='O';
                else 
                grid[i][j]='X';
            }
        }


        
    }
};
