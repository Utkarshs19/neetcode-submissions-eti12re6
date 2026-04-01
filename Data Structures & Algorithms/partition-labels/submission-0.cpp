class Solution {
public:
    vector<int> partitionLabels(string s) {

        vector<int> ans;
        map<char,int> m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]=i;
        }

        for(int i=0;i<s.length();i++)
        {
            int maxi=m[s[i]];
            cout<<i<<endl;

            for(int j=i;j<=maxi;j++)
            {
                maxi=max(maxi,m[s[j]]);
            }
            ans.push_back(maxi-i+1);
            i=maxi;
        }

        return ans;


        
    }
};
