class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        map<int,int> m;
        int x=-1;
        int n=grid.size();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                m[grid[i][j]]++;
                if(m[grid[i][j]]==2)
                x=grid[i][j];
            }
        }

        int y=-1;
        for(int i=1;i<=n*n;i++)
        {
            if(!m.count(i))y=i;
        }

        return {x,y};


    }
};