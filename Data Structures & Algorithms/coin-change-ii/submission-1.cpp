class Solution {
public:
    vector<int> coins;
    vector<vector<int>> dp;
    int helper(int i,int amount)
    {
        if(amount<0)return 0;
        if(amount==0)return 1;
        if(i>=coins.size())
        {
            if(amount==0)return 1;
            else return 0;
        }

        if(dp[i][amount]!=-1)return dp[i][amount];

        int take=0,not_take=0;
        
        take=helper(i,amount-coins[i]);

        not_take=helper(i+1,amount);

        return dp[i][amount]=take+not_take;

    }

    int change(int amount, vector<int>& coins) {
        this->coins=coins;
        dp.resize(coins.size()+1,vector<int>(amount+1,-1));
        return helper(0,amount);
        
    }
};
