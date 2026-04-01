class Solution {
public:
    int maxScore(string s) {

        int cnt=0;
        for(auto i:s)
        {
            cnt+=i-'0';
        }

        int ans=0;
        int cnt1=0;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]=='1')cnt--;
            else cnt1++;

            ans=max(ans,cnt1+cnt);

        }

        return ans;
        
    }
};