class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        int cnt1=0,cnt2=0,cnt3=0;

        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)cnt1++;
            else if(bills[i]==10)
            {
                if(cnt1>0)
                { 
                cnt2++;
                cnt1--;
                }
                else
                return false;
            }
            else if(bills[i]==20)
            {
                if(cnt2>0&&cnt1>0)
                {
                    cnt3++;
                    cnt2--;
                    cnt1--;
                }
                else if(cnt2==0 && cnt1>=3)
                {
                    cnt3++;
                    cnt1-=3;
                }
                else return false;
            }
        }
        
        return true;
    }
};