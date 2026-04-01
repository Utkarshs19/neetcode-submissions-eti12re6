class Solution {
public:
    int helper(int i,vector<int> &nums,int cur)
    {
        if(i==nums.size())return cur;

        return helper(i+1,nums,cur^nums[i])+helper(i+1,nums,cur);
    }
    int subsetXORSum(vector<int>& nums) {

        return helper(0,nums,0);
        
    }
};