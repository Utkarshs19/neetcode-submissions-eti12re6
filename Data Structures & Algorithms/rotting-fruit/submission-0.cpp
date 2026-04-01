class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int cnt=0;
        int ans=0;

        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>> q;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
                if(grid[i][j]==1)cnt++;
            }
        }

        if(cnt==0)return 0;

        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                int x=q.front().first;
                int y=q.front().second;
                q.pop();

                if(x-1>=0 && grid[x-1][y]==1)
                {
                    cnt--;
                    grid[x-1][y]=2;
                    q.push({x-1,y});
                }

                if(x+1<n && grid[x+1][y]==1)
                {
                    cnt--;
                    grid[x+1][y]=2;
                    q.push({x+1,y});
                }

                if(y-1>=0 && grid[x][y-1]==1)
                {
                    cnt--;
                    grid[x][y-1]=2;
                    q.push({x,y-1});
                }

                if(y+1<m && grid[x][y+1]==1)
                {
                    cnt--;
                    grid[x][y+1]=2;
                    q.push({x,y+1});
                }
            }
            ans++;
        }

        if(cnt==0)return ans-1;
        return -1;
        
    }
};
