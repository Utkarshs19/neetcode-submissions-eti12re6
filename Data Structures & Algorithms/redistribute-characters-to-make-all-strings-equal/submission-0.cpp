class Solution {
public:
    bool makeEqual(vector<string>& words) {

        map<char,int> m;
        for(int i=0;i<words.size();i++)
        {
            for(auto j:words[i])
                m[j]++;
        }

        for(auto j:m)
        {
            if(j.second%words.size()!=0)return false;
        }
        return true;
        
    }
};