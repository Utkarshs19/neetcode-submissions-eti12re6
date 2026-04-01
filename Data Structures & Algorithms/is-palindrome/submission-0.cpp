class Solution {
public:
    bool isPalindrome(string s) {

        string str="";

        for(int i=0;i<s.length();i++)
        {
            if(isalnum(s[i]))
            str+=tolower(s[i]);
        }
        cout<<str<<endl;

        int i=0,j=str.length()-1;

        while(i<j)
        {
            if(str[i]!=str[j])return false;
            i++;
            j--;
        }

        return true;
        
    }
};
