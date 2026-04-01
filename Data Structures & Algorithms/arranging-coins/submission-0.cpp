class Solution {
public:
    int arrangeCoins(int n) {

        int ans=0;
        int k=1;
        while(n>=0)
        {
            if(n>=k)
            {
                n=n-k;
                k++;
                ans++;
            }
            else
            break;
        }

        return ans;
        
    }
};