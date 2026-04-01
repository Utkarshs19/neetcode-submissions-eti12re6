class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {

        map<char,int> m;
        for(int i=0;i<order.length();i++)
        {
            m[order[i]]=i;
        }

        for(int i=0;i<words.size();i++)
        {   
            string s=words[i];
            int n=s.length();
            for(int j=i+1;j<words.size();j++)
            {
                string str=words[j];
                int len=str.length();
                int k=0;
                while(k<n && k<len)
                {
                    if(s[k]==str[k])k++;
                    else break;
                }
                if(k==len && k<n)return false;
                if(k<len && k<n)
                {
                    if(m[s[k]]>m[str[k]])return false;
                }
                cout<<s<<"  "<<str<<endl;
            }
        }

        return true;
        
    }
};