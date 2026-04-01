class Solution {
public:

    const int INF=2147483647;
    void islandsAndTreasure(vector<vector<int>>& grid) {

        queue<pair<int,int>> q;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                {
                    q.push({i,j});
                }
            }
        }


        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                int x=q.front().first;
                int y=q.front().second;
                q.pop();

                if(x-1>=0 && grid[x-1][y]==INF)
                {
                    grid[x-1][y]=1+grid[x][y];
                    q.push({x-1,y});
                }

                if(x+1<n && grid[x+1][y]==INF)
                {
                    grid[x+1][y]=1+grid[x][y];
                    q.push({x+1,y});
                }

                if(y-1>=0 && grid[x][y-1]==INF)
                {
                    grid[x][y-1]=1+grid[x][y];
                    q.push({x,y-1});
                }

                if(y+1<m && grid[x][y+1]==INF)
                {
                    grid[x][y+1]=1+grid[x][y];
                    q.push({x,y+1});
                }
            }
        }

        
        
    }
};
