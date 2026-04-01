class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        uint32_t ans=0;

        int k=31;

        while(n>0)
        {
            if(n%2==1)
            {
                ans+=(pow(2,k));
            }
            n=n/2;
            k--;
        }

        return ans;

        
    }
};
