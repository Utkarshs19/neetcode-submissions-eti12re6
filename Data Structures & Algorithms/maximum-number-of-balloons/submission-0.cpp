class Solution {
public:
    int maxNumberOfBalloons(string text) {

        map<char,int> m;
        for(auto i:text)
        {
            if(i=='b' || i=='a' ||i=='l' ||i=='o' ||i=='n')
            m[i]++;
        }

        if(m.size()<5)return 0;

        int ans=INT_MAX;

        for(auto i:m)
        {
            if(i.first=='l' || i.first=='o')
            ans=min(ans,i.second/2);
            else
            ans=min(ans,i.second);
        }

        return ans==INT_MAX?0:ans;
    }
};