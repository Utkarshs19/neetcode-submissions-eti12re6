class Solution {
public:

    string str;
    int n;
    
    vector<string> ans;
    void dfs(int i,vector<string> v)
    {
        if(i==n)
        {
            ans.push_back(str);
            return;
        }
        for(auto j:v[i])
        {
            str+=j;
            dfs(i+1,v);
            str.pop_back();
        }
    }

    vector<string> expand(string s) {

        vector<string> v;

        int i=0;
        while(i<s.length())
        {
            if(s[i]=='{')
            {
                string str;
                while(i<s.length() && s[i]!='}')
                {
                    if(isalpha(s[i]))
                    str+=s[i];

                    i++;
                }
                v.push_back(str);
            }
            else
            {
                string str;
                str+=s[i];
                v.push_back(str);
            }
            i++;
        }

        n=v.size();

        for(int i=0;i<v[0].length();i++)
        {
            str+=v[0][i];
            dfs(1,v); 
            str.pop_back();  
        }

        sort(ans.begin(),ans.end());
        return ans;
    }
};
