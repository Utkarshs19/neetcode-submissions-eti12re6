class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        
        int ans=1;
        int cnt=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]<nums[i])
            {
                cnt++;
                ans=max(ans,cnt);
            }
            else
            {
                cnt=1;
                ans=max(ans,cnt);
            }
        }
        cnt=1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]>nums[i+1])
            {
                cnt++;
                ans=max(ans,cnt);
            }
            else
            {
                cnt=1;
            }
        }

        return ans;

    }
};