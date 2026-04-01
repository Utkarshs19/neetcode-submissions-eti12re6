class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        
        vector<set<int>> v;

        queue<set<int>> q;
         map<set<int>,int> m1;

        for(int i=0;i<routes.size();i++)
        {
            set<int> s;
            for(int j=0;j<routes[i].size();j++)
            {
                s.insert(routes[i][j]);
            }
            v.push_back(s);
            if(s.count(source)){
            q.push(s);
            m1[s]++;}
        }

        map<set<int>,vector<set<int>>> m;
        

        for(int i=0;i<routes.size();i++)
        {
            for(int j=0;j<routes[i].size();j++)
            {
                for(int k=0;k<v.size();k++)
                {
                    if(i==k)continue;
                    if(v[k].count(routes[i][j]))
                    {
                        m[v[i]].push_back(v[k]);
                       
                        
                    }
                }
            }
        }
       
        if(source==target)return 0;
        int ans=1;

        while(!q.empty())
        {
            int size=q.size();
            for(int x=0;x<size;x++){
            set<int> st=q.front();q.pop();

            if(st.count(target))return ans;

            for(auto i:m[st])
            {
                if(!m1.count(i))
                {
                    m1[i]++;
                    q.push(i);
                }
            }

            }
            ans++;

        }

        return -1;

    }
};