class Solution {
public:

    void dfs(int node,vector<vector<int>> &adj,vector<int> &vis,int x)
    {
        vis[node]=1;
        if(node==x)return;

        for(auto i:adj[node])
        {
            if(vis[i]==-1)
            dfs(i,adj,vis,x);
        }
    }

    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        
        vector<vector<int>> adj(numCourses);

        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }

        vector<bool> ans;

        for(int i=0;i<queries.size();i++)
        {
            vector<int> vis(numCourses,-1);
            dfs(queries[i][0],adj,vis,queries[i][1]);
            if(vis[queries[i][1]]==1)
            ans.push_back(true);
            else
            ans.push_back(false);
        }

        return ans;

    }
};