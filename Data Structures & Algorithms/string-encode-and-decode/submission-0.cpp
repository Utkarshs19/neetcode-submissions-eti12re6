class Solution {
public:
    string ans;
    string encode(vector<string>& strs) {

        for(int i=0;i<strs.size();i++)
        {
            int n=strs[i].length();
            ans+=to_string(n);
            ans+='#';
            ans+=strs[i];
        }
        return ans;
    }

    vector<string> decode(string s) {

        int i=0,j=0;
        vector<string> v;

        while(j<s.length())
        {
            int len=0;
            while(i<s.length() && s[i]!='#')
            {
                len=len*10+(s[i]-'0');
                i++;
                j++;
            }
            i++;
            j++;
            
            string str;
            while(i<s.length() && len>0)
            {
                str+=s[i];
                len--;
                i++;
            }
            v.push_back(str);
            j=i;

        }

        return v;

    }
};
