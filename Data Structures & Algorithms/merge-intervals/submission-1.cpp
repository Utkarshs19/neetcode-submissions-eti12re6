class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        vector<vector<int>> ans;

        sort(intervals.begin(),intervals.end());
        int start,end;
        for(int i=0;i<intervals.size();)
        {
             start=intervals[i][0];
             end=intervals[i][1];
            int j;
            for(j=i+1;j<intervals.size();j++)
            {
                if(intervals[j][0]<=end)
                {
                    end=max(end,intervals[j][1]);
                }
                else break;
            }
            ans.push_back({start,end});
            i=j;
        }
        return ans;
        
    }
};
