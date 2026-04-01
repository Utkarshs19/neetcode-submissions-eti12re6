class Solution {
public:

    bool check(char ch,char c)
    {
        if(ch=='I')
        {
            return c=='V'||c=='X'||c=='L'||c=='C'||c=='D'||c=='M';
        }
        if(ch=='V')
        {
            return c=='X'||c=='L'||c=='C'||c=='D'||c=='M';
        }
        if(ch=='X')
        {
            return c=='L'||c=='C'||c=='D'||c=='M';
        }
        if(ch=='L')
        {
            return c=='C'||c=='D'||c=='M';
        }
         if(ch=='C')
        {
            return c=='D'||c=='M';
        }
         if(ch=='D')
        {
            return c=='M';
        }
        if(ch=='M')return false;
    }

    map<char,int> m;

    int romanToInt(string s) {
        
        m['I']=1;m['V']=5;
        m['X']=10;m['L']=50;
        m['C']=100;m['D']=500;
        m['M']=1000;

        int ans=0;

        for(int i=s.length()-1;i>=0;i--)
        {
            if(i+1<s.length() && check(s[i],s[i+1]))
            ans-=m[s[i]];
            else 
            ans+=m[s[i]];

            cout<<ans<<endl;
        }

        return ans;
    }
};