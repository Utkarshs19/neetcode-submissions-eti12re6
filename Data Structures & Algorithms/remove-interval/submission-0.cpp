class Solution {
public:
    vector<vector<int>> removeInterval(vector<vector<int>>& intervals, vector<int>& toBeRemoved) {
        
        vector<vector<int>> ans;

        int x=toBeRemoved[0];
        int y=toBeRemoved[1];

        for(int i=0;i<intervals.size();i++)
        {
            if(x<=intervals[i][0] && y>=intervals[i][1])continue;
            else if(x>intervals[i][0] && y<intervals[i][1]){
            ans.push_back({intervals[i][0],x});
            ans.push_back({y,intervals[i][1]});}
            else if(x>intervals[i][0] && x<intervals[i][1])
            ans.push_back({intervals[i][0],x});
            else if(y>intervals[i][0] && y<intervals[i][1])
            ans.push_back({y,intervals[i][1]});
            else
            ans.push_back({intervals[i][0],intervals[i][1]});
        }
        return ans;
    }
};
