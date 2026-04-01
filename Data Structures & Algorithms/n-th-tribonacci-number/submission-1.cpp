class Solution {
public:

    vector<int> dp;

    int helper(int x)
    {
        if(x==0)return 0;
        if(x<=2)return 1;

        if(dp[x]!=-1)return dp[x];

        return dp[x]=helper(x-3)+helper(x-2)+helper(x-1);
    }

    int tribonacci(int n) {

        if(n==0)return 0;
        if(n<=2)return 1;
        dp.resize(38,-1);

        dp[0]=0;
        dp[1]=1;
        dp[2]=1;

        return helper(n-3)+helper(n-2)+helper(n-1);        
    }
};