class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {

        vector<set<int>> adj(n+1);

        for(int i=0;i<trust.size();i++)
        {
            adj[trust[i][0]].insert(trust[i][1]);
        }

        int ans=-1;

        for(int i=1;i<=n;i++)
        {
            if(adj[i].size()==0)
            {
                bool flag=true;
                for(int j=1;j<=n;j++)
                {
                    if(j==i)continue;
                    else
                    {
                        if(adj[j].find(i)==adj[j].end())
                        {
                            flag=false;
                            break;
                        }
                    }
                }
                if(flag==true)return i;
            }
        }
        return -1;
    }
};