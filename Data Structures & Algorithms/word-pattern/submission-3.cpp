class Solution {
public:
    bool wordPattern(string pattern, string s) {

        map<char,string> m;
        map<string,char> m1;
        int i=0,j=0;
        int cnt=0;
        while(j<s.length()){
            if(s[j]==' ')cnt++;
        j++;}
        j=0;
        while(i<pattern.length() && j<s.length())
        {
            string str="";
            while(j<s.length() && s[j]!=' '){
            str+=s[j];
            j++;
            }
            if(m.count(pattern[i]))
            {
                if(str!=m[pattern[i]])return false;
            }
            else if(m1.count(str))
            {
                if(m1[str]!=pattern[i])return false;
            }
            else
            {
                m[pattern[i]]=str;
                m1[str]=pattern[i];
            }
            i++;
            j++;
        }
        cout<<cnt<<endl;
        if(cnt!=pattern.length()-1)return false;
        return true;
    }
};