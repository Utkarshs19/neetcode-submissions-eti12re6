class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        map<string,bool> m1;

        map<string,vector<string>> m;
        m1[beginWord]=false;
        m1[endWord]=false;

        for(int i=0;i<wordList.size();i++)
        {
            string str=wordList[i];
            m1[str]=false;
            for(int j=0;j<str.length();j++)
            {
                m[str.substr(0,j)+'*'+str.substr(j+1)].push_back(wordList[i]);
            }
        }

        queue<string> q;
        q.push(beginWord);
        m1[beginWord]=true;

        int ans=1;

        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                string s=q.front();
                q.pop();
                cout<<s<<endl;
                
                if(s==endWord)return ans;

                for(int j=0;j<s.length();j++)
                {
                    string x=s.substr(0,j)+'*'+s.substr(j+1);
                    for(auto k:m[x])
                    {
                        if(m1[k]==false)
                        {
                            m1[k]=true;
                            q.push(k);
                        }
                    }
                }
            }
            ans++;
        }

        return 0;

    }
};
