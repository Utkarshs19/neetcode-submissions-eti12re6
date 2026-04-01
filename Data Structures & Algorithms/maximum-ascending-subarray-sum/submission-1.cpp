class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int ans=0,sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i-1>=0 && nums[i-1]>=nums[i])
            {
                ans=max(ans,sum);
                sum=0;
            }
            sum+=nums[i];
        }

        ans=max(ans,sum);

        return ans;
        
    }
};