class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {

        map<string,int> m;

        for(int i=0;i<emails.size();i++)
        {
            string str=emails[i];
            string s="";
            int j=0;
            
            for(j=0;j<str.length();j++)
            {
                if(str[j]=='.')continue;
                else if(str[j]=='+')
                {
                    while(j<str.length() && str[j]!='@')
                    j++;

                    break;
                }
                else if(str[j]=='@')break;

                s+=str[j];
            }
            s+=str.substr(j);

            m[s]++;
        }
        for(auto i:m)
        {
            cout<<i.first<<" "<<i.second<<endl;
        }
        return m.size();
        
    }
};