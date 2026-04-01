class Solution {
public:

    vector<vector<int>> dp;

    int helper(int i,vector<vector<int>>&costs,int c)
    {
        if(i>=costs.size())
        {
            return 0;
        }

        if(dp[i][c]!=-1)return dp[i][c];

        int sum=INT_MAX;

        for(int j=0;j<3;j++)
        {
            if(c==j)continue;
            sum=min(sum,costs[i][j]+helper(i+1,costs,j));
        }
        return dp[i][c]=sum;
    }

    int minCost(vector<vector<int>>& costs) {

        dp.resize(101,vector<int>(4,-1));

        return helper(0,costs,3);
        
    }
};