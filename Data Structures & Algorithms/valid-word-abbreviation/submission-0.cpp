class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {

        int i=0,j=0;

        while(i<word.length() && j<abbr.length())
        {
            if(abbr[j]=='0')return false;

            if(isalpha(abbr[j]))
            {
                if(word[i]!=abbr[j])return false;
                i++;j++;
            }
            else
            {
                int len=0;
                while(j<abbr.length() && isdigit(abbr[j]))
                {
                    len=len*10+(abbr[j]-'0');
                    j++;
                }

                i+=len;
            }
        }

        return i==word.length() && j==abbr.length();
        
    }
};