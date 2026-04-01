class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {

        long long ans=0;
        priority_queue<long long> pq;

        for(auto i:gifts)pq.push(i);

        while(!pq.empty() && k>0)
        {
            long long x=pq.top();
            pq.pop();
            pq.push(sqrt(x));
            k--;
        }

        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
        }

        return ans;
        
    }
};