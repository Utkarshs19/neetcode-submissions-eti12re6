class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int total=accumulate(nums.begin(),nums.end(),0);

        int sum=0;

        if(sum==total)return 0;

        for(int i=0;i<nums.size();i++)
        {          
            total=total-nums[i];
            if(sum==total)return i;
            sum+=nums[i];
        }
        return -1;
        
    }
};