class Solution {
public:
    void dfs(int node,vector<vector<int>> &adj,vector<int>&vis)
    {
        vis[node]=1;
        
        for(auto i:adj[node])
        {
            if(vis[i]==-1)
            {
                dfs(i,adj,vis);
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {

        vector<vector<int>> adj(n);

        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        vector<int> vis(n,-1);
        int cnt=0;

        for(int i=0;i<n;i++)
        {
            if(vis[i]==-1)
            {
                cnt++;
                dfs(i,adj,vis);
            }
        }

        return cnt;

    }
};
