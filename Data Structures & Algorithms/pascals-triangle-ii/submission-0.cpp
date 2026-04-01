class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<int> prev;
        

        if(rowIndex==0)return {1};
        if(rowIndex==1)return {1,1};
        vector<int> cur(2,1);
        for(int i=2;i<=rowIndex;i++)
        {
            prev=cur;
            cur.resize(i+1,1);
            for(int j=1;j<cur.size()-1;j++)
            {
                cur[j]=prev[j-1]+prev[j];
            }
        }

        return cur;
        
    }
};