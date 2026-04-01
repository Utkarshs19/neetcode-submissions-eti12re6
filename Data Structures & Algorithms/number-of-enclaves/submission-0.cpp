class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {

        int n=grid.size();
        int m=grid[0].size();

        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if((i==0 || j==0 || i==n-1 || j==m-1) && grid[i][j]==1)
                {
                    grid[i][j]=0;
                    q.push({i,j});
                }
            }
        }

        while(!q.empty())
        {
            int size=q.size();
            for(int x=0;x<size;x++)
            {
                int i=q.front().first;
                int j=q.front().second;
                q.pop();

                if(i-1>=0 && grid[i-1][j]==1)
                {
                    grid[i-1][j]=0;
                    q.push({i-1,j});
                }
                if(i+1<n && grid[i+1][j]==1)
                {
                    grid[i+1][j]=0;
                    q.push({i+1,j});
                }

                if(j-1>=0 && grid[i][j-1]==1)
                {
                    grid[i][j-1]=0;
                    q.push({i,j-1});
                }
                if(j+1<m && grid[i][j+1]==1)
                {
                    grid[i][j+1]=0;
                    q.push({i,j+1});
                }
            }
        }
        int ans=0;

        for(int i=0;i<n;i++)
        {
            ans+=accumulate(grid[i].begin(),grid[i].end(),0);
        }

        return ans;
        
    }
};