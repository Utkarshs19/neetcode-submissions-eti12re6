class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        map<string,vector<string>> m;

        for(int i=0;i<strs.size();i++)
        {
            string s="";
            for(int j=0;j<strs[i].length();j++)
            {
                s+=strs[i][j];
                m[s].push_back(strs[i]);
            }
        }
        string ans="";
        for(auto i:m)
        {
            if(i.second.size()==strs.size())
            ans=i.first;
        }

        return ans;
        
    }
};