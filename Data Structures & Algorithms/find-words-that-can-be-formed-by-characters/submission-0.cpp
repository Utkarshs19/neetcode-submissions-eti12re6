class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {

        int ans=0;

        map<char,int> m;

        for(auto i:chars)
        m[i]++;

        for(int i=0;i<words.size();i++)
        {
            string s=words[i];
            map<char,int> m1=m;
            bool flag=true;
            for(auto i:s)
            {
                if(!m1.count(i)){
                    flag=false;
                    continue;}
                m1[i]--;
                if(m1[i]==0)m1.erase(i);
            }

            if(flag)
            ans+=s.length();

        }
        
        return ans;
    }
};