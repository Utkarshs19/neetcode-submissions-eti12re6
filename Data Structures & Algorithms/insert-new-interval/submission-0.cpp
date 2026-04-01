class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>> ans;
        intervals.push_back({newInterval[0],newInterval[1]});
        sort(intervals.begin(),intervals.end());

        for(int i=0;i<intervals.size();)
        {
            int start=intervals[i][0];
            int end=intervals[i][1];
            cout<<start<<" "<<end<<endl;
            int j;
           for(j=i+1;j<intervals.size();j++)
           {
                if(intervals[j][0]<=end)
                {
                    end=max(end,intervals[j][1]);
                }
                else
                break;
               
           }
           ans.push_back({start,end});
           i=j;
        }

        return ans;

    }
};
