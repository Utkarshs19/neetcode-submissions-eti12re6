class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int ans=0;

        int cnt=0;

        int i=0,j=0;

        bool flag=true;

        while(j<nums.size())
        {
            if(nums[j]==1)cnt++;
            else
            {
                if(flag==true){cnt++;
                flag=!flag;
                }
                else
                {
                    while(i<j && nums[i]!=0)
                    {
                        cnt--;
                        i++;
                    }
                    cnt--;
                    flag=true;
                    i++;
                }
            }
            j++;
            ans=max(ans,cnt);
        }


        return ans;
        
    }
};
