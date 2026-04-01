class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int n=cardPoints.size();

        int sum=0;
        int mini=INT_MAX;

        int i=0,j=0;

        while(j<n)
        {
            sum+=cardPoints[j];

            if(j-i+1==n-k)
            {
                mini=min(mini,sum);
                sum=sum-cardPoints[i];
                i++;
            }
            j++;
        }
        
        int total=accumulate(cardPoints.begin(),cardPoints.end(),0);
        if(k==n)return total;
        return total-mini;
        
    }
};