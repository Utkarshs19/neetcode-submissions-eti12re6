class Solution {
public:
    vector<vector<int>> ans;
    set<vector<int>> st;
    
    void helper(int i,vector<int> nums,int target,vector<int> v,int sum)
    {
        
        if(sum>target)return;
        if(i==nums.size()) 
        {
            if(sum==target){
            sort(v.begin(),v.end());
            st.insert(v);}
            return;
        }

        v.push_back(nums[i]);
        sum+=nums[i];
        helper(i+1,nums,target,v,sum);
        v.pop_back();
        sum=sum-nums[i];
        helper(i+1,nums,target,v,sum);
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        
        vector<int> v;
        int sum=0;

        helper(0,nums,target,v,sum);
        for(auto i:st)ans.push_back(i);
        return ans;

    }
};
