class Solution {
public:
    set<string> st;

    string str;

    int n,m;
    vector<vector<int>> vis;

    void dfs(int i,int j,vector<vector<int>> &grid)
    {
        vis[i][j]=1;

        if(i-1>=0 && !vis[i-1][j] && grid[i-1][j]==1){
            str+='U';
        dfs(i-1,j,grid);}

        if(i+1<n && !vis[i+1][j] && grid[i+1][j]==1){
            str+='D';
        dfs(i+1,j,grid);}

        if(j-1>=0 && !vis[i][j-1] && grid[i][j-1]==1){
            str+='L';
        dfs(i,j-1,grid);}

        if(j+1<m && !vis[i][j+1] && grid[i][j+1]==1){
            str+='R';
        dfs(i,j+1,grid);}
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
                        str="";
                        str+='A';
                        dfs(i,j,grid);

                        sort(str.begin(),str.end());
                        st.insert(str);
                    }
                }
            }
       }
        
        return st.size();
    }
};
