class Solution {
public:
    map<string,string> m;
    map<string,vector<string>> m1;
    map<string,bool> m2;
    vector<string> v;

    void dfs(string s,map<string,vector<string>> &m1,map<string,bool> &m2)
    {
        m2[s]=true;
        v.push_back(s);

        for(auto i:m1[s])
        {
            if(m2[i]==false)
            {
                dfs(i,m1,m2);
            }
        }
    }

    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        
        vector<vector<string>> ans;
      

        for(int i=0;i<accounts.size();i++)
        {

            for(int j=1;j<accounts[i].size();j++)
            {
                m[accounts[i][j]]=accounts[i][0];
                m2[accounts[i][j]]=false;
                for(int k=1;k<accounts[i].size();k++)
                {
                    m1[accounts[i][j]].push_back(accounts[i][k]);
                }
            }
        }

        for(auto i:m2)
        {
            v.clear();

            if(i.second==false)
            {
                v.push_back(m[i.first]);
                dfs(i.first,m1,m2);
                sort(v.begin()+1,v.end());
                ans.push_back(v);
            }
        }

        return ans;



    }
};