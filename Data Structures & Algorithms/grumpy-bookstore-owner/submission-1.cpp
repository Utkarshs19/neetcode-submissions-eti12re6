class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        
        int ans=0;

        for(int i=0;i<customers.size();i++)
        {
            if(grumpy[i]==0)
            {
                ans+=customers[i];
            }
        }

        int i=0,j=0;
        int sum=0;
        int x=INT_MIN;
        while(j<customers.size())
        {
            if(grumpy[j]==1)sum+=customers[j];
            if(j-i+1==minutes)
            {
                x=max(x,sum);
                if(grumpy[i]==1)
                sum=sum-customers[i];
                i++;
            }
            x=max(x,sum);
            j++;
        }

        return ans+x;

    }
};