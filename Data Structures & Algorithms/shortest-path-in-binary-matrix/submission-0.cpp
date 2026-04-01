class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        int n=grid.size();

        if(grid[0][0]==1 || grid[n-1][n-1]==1)return -1;

        queue<pair<int,int>> q;
        int cnt=0;
        q.push({0,0});

        while(!q.empty())
        {
            int size=q.size();
            cnt++;
            for(int i=0;i<size;i++)
            {
                int x=q.front().first;
                int y=q.front().second;
                q.pop();

                if(x==n-1 && y==n-1)return cnt;

                if(x+1<n && grid[x+1][y]==0)q.push({x+1,y});
                if(y+1<n && grid[x][y+1]==0)q.push({x,y+1});
                if(x+1<n && y+1<n && grid[x+1][y+1]==0)q.push({x+1,y+1});
            }
        }

        return -1;

    }
};