class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<int> ans;

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> >pq;

        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }

        for(auto i:m)
        {
            pq.push({i.second,i.first});
            if(pq.size()>k)
            pq.pop();
        }

        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
        
    }
};
