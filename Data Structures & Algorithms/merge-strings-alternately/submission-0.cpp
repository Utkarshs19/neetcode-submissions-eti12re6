class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int i=0,j=0;
        string ans="";

        while(i<word1.length() && j<word2.length())
        {
            ans+=word1[i];
            i++;
            ans+=word2[j];
            j++;
        }

        ans+=word1.substr(i);
        ans+=word2.substr(j);

        return ans;
        
    }
};