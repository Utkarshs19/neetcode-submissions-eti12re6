class Solution {
public:
    int ans=0;
    vector<int> dp;

    int helper(int i,vector<int> &nums)
    {
        if(i>=nums.size())
        {
            return 0;
        }

        if(dp[i]!=-1)return dp[i];

        int take=nums[i]+helper(i+2,nums);
        int not_take=helper(i+1,nums);

        return dp[i]=max(take,not_take);

    }

    int rob(vector<int>& nums) {

        dp.resize(nums.size(),-1);

        return helper(0,nums);

        return ans;
        
    }
};
