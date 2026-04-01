class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int prev=INT_MIN;

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>prev && nums[i-1]>nums[i])
            return i-1;

            prev=nums[i-1];
        }

        if(nums[nums.size()-1]>nums[nums.size()-2])
        return nums.size()-1;
        
    }
};