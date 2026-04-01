class Solution {
public:
    int n,m;
    int ans=0;
    int cnt=0;

    vector<vector<int>> vis;

    void dfs(int i,int j,vector<vector<int>> &grid)
    {
        vis[i][j]=1;
        cnt++;

        if(i+1<n && grid[i+1][j]==1 && !vis[i+1][j])
        {
            dfs(i+1,j,grid);
        }

        if(i-1>=0 && grid[i-1][j]==1 && !vis[i-1][j])
        {
            dfs(i-1,j,grid);
        }

        if(j+1<m && grid[i][j+1]==1 && !vis[i][j+1])
        {
            dfs(i,j+1,grid);
        }

        if(j-1>=0 && grid[i][j-1]==1 && !vis[i][j-1])
        {
            dfs(i,j-1,grid);
        }

        ans=max(ans,cnt);

    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {

        n=grid.size();
        m=grid[0].size();

        vis.resize(n,vector<int>(m,0));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && !vis[i][j]){
                    cnt=0;
                dfs(i,j,grid);
                }
            }
        }

        return ans;

        
    }
};
