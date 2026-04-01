class Solution {
public:
    int compress(vector<char>& chars) {

        string ans;
        int i=0;
        int j=0;
        int cnt=0;
        while(i<chars.size())
        {
            while(i<chars.size() && chars[i]==chars[j])
            {
                cnt++;
                i++;
            }
            if(cnt==1)
            ans+=chars[j];
            else
            {
                ans+=chars[j];
                ans+=to_string(cnt);
            }
            cnt=0;
            j=i;
        }

        chars.clear();

        for(int i=0;i<ans.length();i++)
        {
            chars.push_back(ans[i]);
        }

        return ans.length();
        
    }
};