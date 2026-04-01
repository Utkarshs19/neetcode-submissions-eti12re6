class Solution {
public:
    double myPow(double x, int n) {
        
        bool flag=false;
        if(n<0){flag=true;n=n*-1;}

        double ans=1.0;
        while(n>0)
        {
            ans=ans*x;
            n--;
        }

        if(flag)
        return 1.0/ans;

        return ans;

        

    }
};
