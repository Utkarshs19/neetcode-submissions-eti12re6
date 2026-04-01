class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end(),[](auto &x,auto &y){return x[1]<y[1];});

        int ans=0;

        for(int i=0;i<intervals.size();i++)
        {
            cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
        }

        for(int i=0;i<intervals.size();)
        {
            int start=intervals[i][0];
            int end=intervals[i][1];
            int j;
            for(j=i+1;j<intervals.size();j++)
            {
                if(intervals[j][0]<end)
                {
                    ans++;
                }
                else
                break;
            }
            i=j;
        }

        return ans;
        
    }
};
