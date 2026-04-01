class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        map<int,int> m;
        m[0]=-1;

        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int r=sum%k;
            if(m.count(r))
            {
                if(i-m[r]>1)return true;
                continue;
            }
            m[r]=i;
        }

        return false;
        
    }
};