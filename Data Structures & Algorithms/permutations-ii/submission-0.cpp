class Solution {
public:
    set<vector<int>> st;
    void helper(int i,vector<int> &nums)
    {
        if(i==nums.size())
        {
            st.insert(nums);
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            swap(nums[i],nums[j]);
            helper(i+1,nums);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {

        helper(0,nums);

        vector<vector<int>> ans;

        for(auto i:st)
        ans.push_back(i);

        return ans;
        
    }
};