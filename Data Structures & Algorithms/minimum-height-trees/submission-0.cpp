class Solution {
public:
    vector<int> instack;
    int cnt=0;
    void dfs(int node,vector<vector<int>>&adj,vector<int>&vis)
    {
        vis[node]=1;
        instack[node]=1;

        for(auto i:adj[node])
        {
            if(!vis[i])
            dfs(i,adj,vis);
        }
        cnt=max(cnt,accumulate(instack.begin(),instack.end(),0));
        instack[node]=0;
    }
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {

        vector<vector<int>> adj(n);
        instack.resize(n,0);
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        int mini=INT_MAX;
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            vector<int> vis(n,0);
            cnt=0;
            dfs(i,adj,vis);
            mini=min(mini,cnt);
            m[i]=cnt;
        }

        vector<int> ans;

        for(auto i:m)
        {
            if(i.second==mini)ans.push_back(i.first);
        }

        return ans;

        
    }
};