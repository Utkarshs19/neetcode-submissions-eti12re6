class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        int ans=0;

        map<int,int> m;
        for(auto i:nums)m[i]++;

        for(auto i:m)
        {
            ans+=(i.second*(i.second-1)/2);
        }
        
        return ans;
        
    }
};