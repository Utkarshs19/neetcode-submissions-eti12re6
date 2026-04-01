class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int cur=0;
        int maxi=INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            if(cur<=0)
            cur=0;

            cur+=nums[i];
            maxi=max(maxi,cur);
        }

        return maxi;

    }
};
