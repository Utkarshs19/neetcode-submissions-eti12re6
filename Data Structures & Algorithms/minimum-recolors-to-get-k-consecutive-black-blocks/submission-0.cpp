class Solution {
public:
    int minimumRecolors(string blocks, int k) {

        int i=0,j=0;
        int ans=INT_MAX;
        int cnt=0;

        while(j<blocks.length())
        {
            if(blocks[j]=='W')cnt++;

            if(j-i+1==k)
            {
                ans=min(ans,cnt);
                if(blocks[i]=='W')cnt--;
                i++;
            }
            j++;
        }

        return ans;
        
    }
};