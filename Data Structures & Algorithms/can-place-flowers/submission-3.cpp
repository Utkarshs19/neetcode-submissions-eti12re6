class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int j=0;

        int m=flowerbed.size();
        
        if(m==1 && n==1)
        {
            return flowerbed[0]==0;
        }

        while(j<flowerbed.size())
        {
            if(j==0 && j+1<flowerbed.size() && flowerbed[j]==0 && flowerbed[j+1]==0)
            {
                flowerbed[j]=1;
                n--;
            }
            else if(j==flowerbed.size()-1 && j-1>=0 && flowerbed[j]==0 && flowerbed[j-1]==0)
            {
                flowerbed[j]=1;
                n--;
            }
            else if(j-1>=0 && j+1<flowerbed.size() && flowerbed[j-1]==0 && flowerbed[j+1]==0 && flowerbed[j]==0)
            {
                flowerbed[j]=1;
                n--;
            }
            j++;
            if(n==0)return true;
        }

        return false;
        
    }
};