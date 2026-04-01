class Solution {
public:
    vector<vector<int>> dp;

    bool helper(int i,vector<int>&nums,int sum)
    {
       if(sum==0)return true;
       if(i>=nums.size())return false;
        
        if(dp[i][sum]!=-1)return dp[i][sum];

        bool take=false,not_take=false;

        if(nums[i]<=sum)
        {
            take=helper(i+1,nums,sum-nums[i])||helper(i+1,nums,sum);
        }
        else
        {
            not_take=helper(i+1,nums,sum);
        }

        return dp[i][sum]=take||not_take;
    }

    bool canPartition(vector<int>& nums) {

        int sum=accumulate(nums.begin(),nums.end(),0);

        if(sum%2==1)return false;

        dp.resize(nums.size()+1,vector<int>(sum+1,-1));

        return helper(0,nums,sum/2);
        
    }
};
