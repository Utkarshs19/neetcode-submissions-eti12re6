class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        set<vector<int>> s;

        vector<vector<int>> ans;

        

        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    for(int a=k+1;a<nums.size();a++)
                    {
                        if(nums[i]+nums[j]+0LL+nums[k]+nums[a]==target)
                        {
                            vector<int> v={nums[i],nums[j],nums[k],nums[a]};
                            sort(v.begin(),v.end());
                            s.insert(v);
                        }
                    }
                }
            }
        }

        

        for(auto i:s)
        {
            ans.push_back(i);
        }
        
        return ans;
    }
};