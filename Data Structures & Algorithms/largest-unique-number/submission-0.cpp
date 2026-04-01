class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {

        map<int,int> m;
        for(auto i:nums)m[i]++;

        int ans=-1;

        for(auto i:m)
        {
            if(i.second==1)ans=i.first;
        }

        return ans;
        
    }
};
