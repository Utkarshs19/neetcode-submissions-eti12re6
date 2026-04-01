class Solution {
public:
    void dfs(int node,vector<vector<int>> &adj,vector<int> &vis)
    {
        vis[node]=1;
        for(auto i:adj[node])
        {
            if(!vis[i])
            dfs(i,adj,vis);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {

        int n=isConnected.size();

        vector<vector<int>> adj(n);

        vector<int> vis(n,0);
        int x;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j])
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                    x=i;
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0 && isConnected[i][i])
            {
                ans++;
                dfs(i,adj,vis);
            }
        }

        return ans;


        
    }
};