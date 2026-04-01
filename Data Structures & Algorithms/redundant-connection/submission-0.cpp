class Solution {
public:
    
    void dfs(int node,vector<vector<int>> &adj,vector<int> &vis,int x,int y)
    {
        vis[node]=1;

        for(auto &i:adj[node])
        {
            if((i==x && node==y) || (i==y && node==x))continue;

            if(vis[i]==-1)
            {
                dfs(i,adj,vis,x,y);
            }
        }
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        
        int n=edges.size();

        vector<vector<int>> adj(n+1);
        

        for(int i=0;i<n;i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        int x=-1;
        int y=-1;

        for(int i=0;i<n;i++)
        {
            int cnt=0;
            vector<int> vis(n+1,-1);
            for(int j=1;j<=n;j++)
            {
                if(vis[j]==-1)
                {
                    cnt++;
                    dfs(j,adj,vis,edges[i][0],edges[i][1]);
                }
            }
            vis.clear();
            if(cnt==1)
            {
                x=edges[i][0];
                y=edges[i][1];
            }

        }

        return {x,y};

    }
};
