class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> ans(n+1);
        map<int,int> m;

        for(int i=0;i<=n;i++)
        {
            int x=i;
            int y=0;
            while(x>0)
            {
                if(m.count(x))
                {
                    y=y+m[x];
                    break;
                }
                if(x%2==1)y++;
                x=x/2;
            }
            m[i]=y;
            ans[i]=y;
        }

        return ans;
        
    }
};
