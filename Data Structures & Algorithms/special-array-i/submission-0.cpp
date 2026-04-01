class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        bool flag;
        if(nums[0]%2==0)
        flag=true;
        else 
        flag=false;

        for(int i=1;i<nums.size();i++)
        {
            if(flag && nums[i]%2==0)return false;
            if(!flag && nums[i]%2==1)return false;
            flag=!flag;
        }

        return true;

    }
};