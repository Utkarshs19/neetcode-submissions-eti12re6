class Solution {
public:
    int minKnightMoves(int x, int y) {

        queue<pair<int,int>> q;
        q.push({0,0});

        map<pair<int,int>,int> m;
        m[{0,0}]++;

        int ans=0;

        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                int a=q.front().first;
                int b=q.front().second;
                q.pop();

                if(a==x && b==y)return ans;

                if(!m.count({a-2,b-1}))
                {
                    m[{a-2,b-1}]++;
                    q.push({a-2,b-1});
                }
                if(!m.count({a-1,b-2}))
                {
                    m[{a-1,b-2}]++;
                    q.push({a-1,b-2});
                }
                if(!m.count({a+2,b-1}))
                {
                    m[{a+2,b-1}]++;
                    q.push({a+2,b-1});
                }
                if(!m.count({a+1,b-2}))
                {
                    m[{a+1,b-2}]++;
                    q.push({a+1,b-2});
                }


                if(!m.count({a-2,b+1}))
                {
                    m[{a-2,b+1}]++;
                    q.push({a-2,b+1});
                }
                if(!m.count({a-1,b+2}))
                {
                    m[{a-1,b+2}]++;
                    q.push({a-1,b+2});
                }
                if(!m.count({a+2,b+1}))
                {
                    m[{a+2,b+1}]++;
                    q.push({a+2,b+1});
                }
                if(!m.count({a+1,b+2}))
                {
                    m[{a+1,b+2}]++;
                    q.push({a+1,b+2});
                }
            }
            ans++;
        }
        
        return ans;
    }
};
