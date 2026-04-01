class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {

        map<string,vector<string>> m;

        for(int i=0;i<strings.size();i++)
        {
            string str=strings[i];
            if(str.length()==1)
            {
                m["*"].push_back(strings[i]);
                continue;
            }
            string s;
            for(int j=1;j<str.length();j++)
            {
                s+=to_string((str[j]-str[j-1]+26)%26);
                s+='*';
            }
            m[s].push_back(strings[i]);
        }

        vector<vector<string>> ans;

        for(auto i:m)
        {
            cout<<i.first<<endl;
            ans.push_back(i.second);
        }

        return ans;
        
    }
};
