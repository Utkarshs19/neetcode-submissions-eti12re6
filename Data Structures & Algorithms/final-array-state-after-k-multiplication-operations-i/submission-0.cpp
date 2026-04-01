class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        for(int i=0;i<nums.size();i++)
        {
            pq.push({nums[i],i});
        }

        while(!pq.empty() && k>0)
        {
            int x=pq.top().first;
            int y=pq.top().second;
            pq.pop();

            pq.push({x*multiplier,y});
            k--;
        }

        while(!pq.empty())
        {
            int x=pq.top().first;
            int y=pq.top().second;

            nums[y]=x;
            pq.pop();
        }

        return nums;
    }
};