class Solution {
public:
    vector<int> dp;
    int helper(int i,vector<int> &costs)
    {
        if(i>=costs.size())return 0;
        
        if(dp[i]!=-1)return dp[i];

        int one=costs[i]+helper(i+1,costs);
        int two=costs[i]+helper(i+2,costs);

        return dp[i]=min(one,two);
    }
    int minCostClimbingStairs(vector<int>& cost) {

    dp.assign(cost.size(),-1);

    int x=helper(0,cost);

    dp.assign(cost.size(),-1);

    int y=helper(1,cost);

    return min(x,y);

        
    }
};
