class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        map<char,int> m;

        int ans=0;

        int i=0,j=0;

        while(j<s.length())
        {
            if(m.find(s[j])!=m.end()){
            
                m[s[i]]--;
                if(m[s[i]]==0)m.erase(s[i]);
                i++;
            }
            else{
            m[s[j]]++;
            ans=max(ans,j-i+1);
            j++;
            }
        }

        return ans;

        
        
    }
};
