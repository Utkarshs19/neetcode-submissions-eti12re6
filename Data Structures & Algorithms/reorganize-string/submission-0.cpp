class Solution {
public:
    string reorganizeString(string s) {

        map<int,int> m;

        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }

        priority_queue<pair<int,char>> pq;

        for(auto i:m)
        {
            pq.push({i.second,i.first});
        }
        
        string ans="";

        while(!pq.empty())
        {
            int x=pq.top().first;
            char y=pq.top().second;

            pq.pop();
            if(pq.size()>0)
            {
                int a=pq.top().first;
                char b=pq.top().second;
                pq.pop();

                ans+=y;
                ans+=b;
                x--;
                a--;
                if(x>0)
                pq.push({x,y});
                if(a>0)
                pq.push({a,b});
            }
            else if(x==1)
            {
                ans+=y;
                return ans;
            }
            else
            return "";
        }
        return ans;
    }
};