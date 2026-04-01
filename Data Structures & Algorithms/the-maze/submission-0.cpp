class Solution {
public:

    bool ans=false;
    int n,m;
    int x,y;

    vector<vector<int>> vis;

    void dfs(int i,int j,vector<vector<int>> &maze)
    {
        if(vis[i][j])return;

        vis[i][j]=1;
        if(i==x && j==y)
        {
            ans=true;
            return;
        }
        int ni=i,nj=j;
        while(ni-1>=0 && maze[ni-1][nj]==0)
        {
            ni--;
        }
        dfs(ni,nj,maze);

          ni=i,nj=j;
        while(ni+1<n && maze[ni+1][nj]==0)
        {
            ni++;
        }
        dfs(ni,nj,maze);

          ni=i,nj=j;
        while(nj-1>=0 && maze[ni][nj-1]==0)
        {
            nj--;
        }
        dfs(ni,nj,maze);

          ni=i,nj=j;
        while(nj+1<m && maze[ni][nj+1]==0)
        {
            nj++;
        }
        dfs(ni,nj,maze);

    }

    bool hasPath(vector<vector<int>>& maze, vector<int>& start, vector<int>& destination) {
        
        n=maze.size();
        m=maze[0].size();
        vis.resize(n,vector<int>(m,0));
        x=destination[0];
        y=destination[1];

        dfs(start[0],start[1],maze);

        return ans;

    }
};
