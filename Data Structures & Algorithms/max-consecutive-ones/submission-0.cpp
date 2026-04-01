class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int ans=0;

        int i=0,j=0;

        while(j<nums.size())
        {
            if(nums[j]==1)
            {
                i=j;
            while(j<nums.size() && nums[j]==1)
            {
                j++;
            }
            ans=max(ans,j-i);
            }
            j++;
        }

        return ans;
        
    }
};