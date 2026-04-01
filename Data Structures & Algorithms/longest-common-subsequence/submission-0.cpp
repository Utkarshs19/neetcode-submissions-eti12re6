class Solution {
public:
    int n,m;
    vector<vector<int>> dp;

    int helper(int i,int j,string &text1,string &text2)
    {
        if(i>=n || j>=m)return 0;

        if(i==n-1 && j==m-1)
        {
            return text1[i]==text2[j];
        }

        if(dp[i][j]!=-1)return dp[i][j];

        if(text1[i]==text2[j])
        {
            dp[i][j]=1+helper(i+1,j+1,text1,text2);
        }
        else
        {
            dp[i][j]=max(helper(i+1,j,text1,text2),helper(i,j+1,text1,text2));
        }

        return dp[i][j];
    }

    int longestCommonSubsequence(string text1, string text2) {

        n=text1.length();
        m=text2.length();

        dp.resize(1001,vector<int>(1001,-1));

        return helper(0,0,text1,text2);
        
    }
};
