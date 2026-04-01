class Solution {
public:
    bool divideArray(vector<int>& nums) {

        int n=nums.size();

        map<int,int> m;
        for(auto i:nums)
        m[i]++;

        int cnt=0;

        for(auto i:m)
        {
            cnt+=(i.second/2);
        }

        return cnt==n/2;

        
    }
};