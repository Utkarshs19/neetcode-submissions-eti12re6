class Solution {
public:
    bool isPathCrossing(string path) {

        set<pair<int,int>>  st;
        st.insert({0,0});
        int x=0,y=0;

        for(int i=0;i<path.length();i++)
        {
            if(path[i]=='N')x=x+1;
            else if(path[i]=='S')x=x-1;
            else if(path[i]=='E')y=y-1;
            else
            y=y+1;

            if(st.count({x,y}))return true;
            st.insert({x,y});
        }

        return false;
        
    }
};