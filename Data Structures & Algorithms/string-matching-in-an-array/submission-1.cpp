class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {

        set<string> st;

        for(int i=0;i<words.size();i++)
        {
            string s=words[i];

            for(int j=0;j<words.size();j++)
            {
                if(i==j)continue;

                int a=0,b=0;
                string str=words[j];
                while(a<s.length() && b<str.length())
                {
                    if(s[a]==str[b])
                    {
                        a++;
                        b++;
                    }
                    else
                    {
                        b++;
                        a=0;
                    }
                }
                if(a==s.length()){
                st.insert(s);
                continue;
                }
            }
        }
        vector<string> ans(st.begin(),st.end());
        return ans;
    }
};