class Solution {
public:
    int strStr(string haystack, string needle) {

        int i=0,j=0,k=0;

        while(i<haystack.length() && j<needle.length())
        {
            if(haystack[k]==needle[j])
            {
                k++;
                j++;
            }
            else
            {
                j=0;
                i++;
                k=i;
            }
        }

        if(j==needle.size())return i;
        return -1;
        
    }
};