class Solution {
public:
    vector<bool> vis;
    vector<bool> instack;
    bool cycle=false;
    
    void dfs(int node,vector<vector<int>> &adj)
    {
        vis[node]=true;
        instack[node]=true;

        for(auto i:adj[node])
        {
            if(vis[i]==false)
            {
                dfs(i,adj);
            }
            else
            {
                if(instack[i]==true)
                {
                    cycle=true;
                    return;
                }
            }
        }
        instack[node]=false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vis.resize(numCourses,false);
        instack.resize(numCourses,false);

        vector<vector<int>> adj(numCourses);

        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }

        for(int i=0;i<numCourses;i++)
        {
            if(vis[i]==false)
            dfs(i,adj);

            if(cycle==true)return false;
        }

        return true;

    }
};
