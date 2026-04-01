class Solution {
public:
    int n;
    vector<vector<int>> vis;
    queue<pair<int,int>> q;

    void dfs(int i,int j,vector<vector<int>> &grid)
    {
        vis[i][j]=1;
        q.push({i,j});

        if(i-1>=0 && !vis[i-1][j] && grid[i-1][j]==1)
        {
            dfs(i-1,j,grid);
        }

        if(i+1<n && !vis[i+1][j] && grid[i+1][j]==1)
        {
            dfs(i+1,j,grid);
        }

        if(j-1>=0 && !vis[i][j-1] && grid[i][j-1]==1)
        {
            dfs(i,j-1,grid);
        }

        if(j+1<n && !vis[i][j+1] && grid[i][j+1]==1)
        {
            dfs(i,j+1,grid);
        }
    }

    int shortestBridge(vector<vector<int>>& grid) {

        n=grid.size();
        vis.resize(n,vector<int>(n,0));

        bool flag=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    dfs(i,j,grid);
                    flag=true;
                    break;
                }
            }
            if(flag)break;
        }   

        int ans=0;

        while(!q.empty())
        {
            int size=q.size();

            for(int x=0;x<size;x++)
            {
                int i=q.front().first;
                int j=q.front().second;
                q.pop();

                 if(i-1>=0 && !vis[i-1][j])
                {
                    if(grid[i-1][j]==1)return ans;
                    vis[i-1][j]=1;
                    q.push({i-1,j});
                }

                if(i+1<n && !vis[i+1][j] )
                {    
                    if(grid[i+1][j]==1)return ans;
                    vis[i+1][j]=1;
                    q.push({i+1,j});
                }

                if(j-1>=0 && !vis[i][j-1] )
                {
                     if(grid[i][j-1]==1)return ans;
                    vis[i][j-1]=1;
                    q.push({i,j-1});
                }

                if(j+1<n && !vis[i][j+1])
                {
                    if(grid[i][j+1]==1)return ans;
                    vis[i][j+1]=1;
                    q.push({i,j+1});
                }

            }
            ans++;
        }
        

        return ans;


    }
};