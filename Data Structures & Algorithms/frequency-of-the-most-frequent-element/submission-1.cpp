class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long sum=0;
        int i=0,j=0;

        while(j<nums.size())
        {
            sum+=nums[j];
            if((j-i+1)*1ll*nums[j]>sum+k)
            {
                sum=sum-nums[i];
                i++;
            }
            j++;
        }

        return nums.size()-i;
        
    }
};