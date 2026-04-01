class Solution {
public:
    set<vector<pair<int,int>>> st;

    vector<pair<int,int>> v;

    int n,m;
    vector<vector<int>> vis;

    void dfs(int i,int j,vector<vector<int>> &grid)
    {
        vis[i][j]=1;
        v.push_back({i,j});

        if(i-1>=0 && !vis[i-1][j] && grid[i-1][j]==1)
        dfs(i-1,j,grid);

        if(i+1<n && !vis[i+1][j] && grid[i+1][j]==1)
        dfs(i+1,j,grid);

        if(j-1>=0 && !vis[i][j-1] && grid[i][j-1]==1)
        dfs(i,j-1,grid);

        if(j+1<m && !vis[i][j+1] && grid[i][j+1]==1)
        dfs(i,j+1,grid);
    }

    int numDistinctIslands(vector<vector<int>>& grid) {

       n=grid.size();
       m=grid[0].size();

       vis.resize(n,vector<int>(m,0));

       for(int i=0;i<n;i++)
       {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    if(!vis[i][j])
                    {
                        v.clear();
                        dfs(i,j,grid);

                        sort(v.begin(),v.end());

                        int x=v[0].first;
                        int y=v[0].second;

                        vector<pair<int,int>> a;
                        for(int i=0;i<v.size();i++)
                        {
                            a.push_back({v[i].first-x,v[i].second-y});
                        }

                        st.insert(a);

                    }
                }
            }
       }
        
        return st.size();
    }
};
