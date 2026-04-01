class Solution {
public:

    vector<int> dp;

    int helper(int i,int n)
    {
        if(i>n)return 0;
        if(i==n)return 1;

        if(dp[i]!=-1)return dp[i];

        int one=helper(i+1,n);
        int two=helper(i+2,n);

        return dp[i]=one+two;
    }

    int climbStairs(int n) {

        dp.resize(n,-1);
        return helper(0,n);
        
    }
};
