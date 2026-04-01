class Solution {
public:
    bool dfs(int node,vector<vector<int>> &adj,vector<int> &vis,int par)
    {
        vis[node]=1;

        for(auto i:adj[node])
        {
            if(vis[i]==-1)
            {
                dfs(i,adj,vis,node);
            }
            else if(i!=par) return true;
        }
        return false;
    }
    bool validTree(int n, vector<vector<int>>& edges) {

        vector<vector<int>> adj(n);

        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        if (edges.size() != n - 1) return false;
        if (n == 1) return true;

        vector<int> vis(n,-1);
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==-1)
            {
                cnt++;
                if(dfs(i,adj,vis,-1))return false;
            }
        }

        if(cnt>1)return false;

        return true;



    }
};
