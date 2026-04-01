class Solution {
public:
    string addBoldTag(string s, vector<string>& words) {

        set<string> st;
        for(auto i:words)
        st.insert(i);

        vector<bool> flag(s.length(),false); 

        for(int i=0;i<s.length();i++)
        {
            for(auto j:st)
            {
                int len=j.length();

                if(s.substr(i,len)==j)
                {
                    for(int a=i;a<i+len;a++)
                    flag[a]=true;
                    continue;
                }
            }
        }
        
        string ans="";

        for(int i=0;i<s.length();)
        {
            if(flag[i])
            {
                ans+="<b>";
                while(i<s.length() && flag[i]==true)
                {
                    ans+=s[i];
                    i++;
                }
                ans+="</b>";
            }
            else{
            ans+=s[i];
            i++;}

        }
        return ans;
    }
};
