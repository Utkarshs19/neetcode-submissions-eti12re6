class Solution {
public:
    vector<vector<int>> vis;
    int ans=0;

    void dfs(int i,int j,vector<vector<int>> &grid,vector<vector<int>> &vis)
    {
        vis[i][j]=1;
        int cnt=0;
        int n=grid.size();
        int m=grid[0].size();

        if(i+1<n && grid[i+1][j]==1)
        {
            cnt++;

            if(vis[i+1][j]==-1)
            dfs(i+1,j,grid,vis);
        }

        if(i-1>=0 && grid[i-1][j]==1)
        {
            cnt++;

            if(vis[i-1][j]==-1)
            dfs(i-1,j,grid,vis);
        }

        if(j+1<m && grid[i][j+1]==1)
        {
            cnt++;

            if(vis[i][j+1]==-1)
            dfs(i,j+1,grid,vis);
        }

        if(j-1>=0 && grid[i][j-1]==1)
        {
            cnt++;

            if(vis[i][j-1]==-1)
            dfs(i,j-1,grid,vis);
        }
        ans+=4-cnt;
    }


    int islandPerimeter(vector<vector<int>>& grid) {

        int n=grid.size();
        int m=grid[0].size();
        vis.resize(n,vector<int>(m,-1));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && vis[i][j]==-1)
                {
                    dfs(i,j,grid,vis);
                }
            }
        }

        return ans;
        
    }
};