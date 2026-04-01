class Solution {
public:
    string longestDiverseString(int a, int b, int c) {

        priority_queue<pair<int,char>> pq;

        if(a>0)
        pq.push({a,'a'});
        if(b>0)
        pq.push({b,'b'});
        if(c>0)
        pq.push({c,'c'});

        string str="";

        while(!pq.empty())
        {
            char c=pq.top().second;
            int x=pq.top().first;
            pq.pop();

            if(str.size()>1 && str[str.size()-1]==c && str[str.size()-2]==c)
            {
                if(pq.empty())break;
                char ch=pq.top().second;
                int y=pq.top().first;
                pq.pop();
                str+=ch;
                if(--y>0)
                pq.push({y,ch});
                pq.push({x,c});
            }
            else
            {
                str+=c;
                if(--x>0)
                pq.push({x,c});
            }
        }

        return str;
        
    }
};