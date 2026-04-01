class Solution {
public:
        string ans;

        map<char,vector<char>> m;
        map<char,bool> m1;
        map<char,bool> m2;
        bool cycle=false;

    void dfs(char node,map<char,vector<char>> &m)
    {   
        if(cycle)return;
        m1[node]=true;
        m2[node]=true;
        for(auto &i:m[node])
        {
            if(m1[i]==false)
            {
                dfs(i,m);
            }
            else
            {
                if(m2[i])
                {
                    cycle=true;
                    return;
                }
            }
        }
        m2[node]=false;
        ans+=node;
    }

    string foreignDictionary(vector<string>& words) {

        set<char> st;
        for(int i=0;i<words.size();i++)
        {
            for(char c:words[i]){
            st.insert(c);
            m1[c]=false;
            m2[c]=false;
            }
        }
        

        for(int i=1;i<words.size();i++)
        {
            string &s1=words[i-1];
            string &s2=words[i];
            
            int j = 0;
            while (j < s1.size() && j < s2.size() && s1[j] == s2[j]) {
                j++;
            }
            if (j == s2.size() && s1.size() > s2.size()) {
                return "";
            }
            if (j < s1.size() && j < s2.size()) {
                m[s1[j]].push_back(s2[j]);
            }

            
        }

        for(char c:st)
        {
            if(m1[c]==false)
            {  
                dfs(c,m);
                if(cycle)
                return "";
            }
        }

        reverse(ans.begin(),ans.end());
        return ans;

    }
};
