class Solution {
public:
    string minWindow(string s, string t) {

        map<char,int> m,m1;
        int x=-1,y=-1;
        for(auto i:t)
        {
            m[i]++;
        }

        int len=INT_MAX;

        int i=0,j=0;

        while(j<s.length())
        {
            m1[s[j]]++;
            bool flag=true;
            for(auto it:m)
            {
                if(m1[it.first] < it.second)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                while(i<j)
                {
                    if(m.count(s[i]))
                    {
                        if(m1[s[i]]>m[s[i]])
                        m1[s[i]]--;
                        else
                        break;
                    }
                    i++;
                }

                if(len>j-i+1)
                {
                    cout<<i<<"  "<<j<<endl;
                    len=j-i+1;
                    x=i;
                    y=j;
                }
            }
            j++;
        }

        if(x==-1 && y==-1)return "";

        return s.substr(x,y-x+1);
        
        
    }
};
