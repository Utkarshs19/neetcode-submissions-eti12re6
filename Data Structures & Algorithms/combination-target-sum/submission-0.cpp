class Solution {
public:
    vector<vector<int>> ans;
    
    void helper(int i,vector<int> nums,int target,vector<int> v,int sum)
    {
        
        if(sum>target)return;
        if(i==nums.size()) 
        {   
            if(sum==target)
            ans.push_back(v);
            
            return;
        }

        v.push_back(nums[i]);
        sum+=nums[i];
        helper(i,nums,target,v,sum);
        v.pop_back();
        sum=sum-nums[i];
        helper(i+1,nums,target,v,sum);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        
        vector<int> v;
        int sum=0;

        helper(0,nums,target,v,sum);

        return ans;

    }
};
