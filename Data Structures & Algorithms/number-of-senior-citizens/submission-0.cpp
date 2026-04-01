class Solution {
public:
    int countSeniors(vector<string>& details) {

        int ans=0;

        for(int i=0;i<details.size();i++)
        {
            int x=0;
            x=x*10+(details[i][11]-'0');
            x=x*10+(details[i][12]-'0');
            if(x>60)ans++;
        }

        return ans;
        
    }
};