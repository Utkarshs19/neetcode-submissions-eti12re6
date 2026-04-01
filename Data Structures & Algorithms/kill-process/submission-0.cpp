class Solution {
public:
    vector<int> ans;
    set<int> st;

    void dfs(int x,map<int,vector<int>> &m)
    {
        ans.push_back(x);
        st.insert(x);

        for(auto i:m[x])
        {
            if(!st.count(i))
            {
                st.count(i);
                dfs(i,m);
            }
        }
    }

    vector<int> killProcess(vector<int>& pid, vector<int>& ppid, int kill) {
        
        map<int,vector<int>> m;

        for(int i=0;i<ppid.size();i++)
        {
            m[ppid[i]].push_back(pid[i]);
        }
        
        dfs(kill,m);

        return ans;

    }
};
