class Solution {
public:
    int n, m;
    vector<vector<int>> vis;

    void dfs(int i,int j,vector<vector<int>> &image,int x,int y)
    {
        vis[i][j]=1;

        if(i-1>=0 && image[i-1][j]==image[x][y] && !vis[i-1][j])
        {
            dfs(i-1,j,image,x,y);
        }

        if(i+1<n && image[i+1][j]==image[x][y] && !vis[i+1][j])
        {
            dfs(i+1,j,image,x,y);
        }

        if(j-1>=0 && image[i][j-1]==image[x][y] && !vis[i][j-1])
        {
            dfs(i,j-1,image,x,y);
        }

        if(j+1<m && image[i][j+1]==image[x][y] && !vis[i][j+1])
        {
            dfs(i,j+1,image,x,y);
        }


    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        n=image.size();
        m=image[0].size();

        vis.resize(n,vector<int>(m,0));

        dfs(sr,sc,image,sr,sc);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==1)
                image[i][j]=color;
            }
        }

        return image;

    }
};