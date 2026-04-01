class Solution {
public:
    int characterReplacement(string s, int k) {

        int i=0,j=0;
        int ans=0;
        map<char,int> m;

        int maxi=0;

        while(j<s.length())
        {
            m[s[j]]++;
            maxi=max(maxi,m[s[j]]);

            while(j-i+1-maxi>k)
            {
                m[s[i]]--;
                for(auto a:m)
                {
                    maxi=max(maxi,a.second);
                }
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;      
    }
};
