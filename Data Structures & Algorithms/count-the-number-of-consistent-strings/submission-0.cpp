class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

     set<char> st;
     for(auto i:allowed)
     st.insert(i);

     int ans=0;

     for(int i=0;i<words.size();i++)
     {
        bool flag=true;
        for(auto j:words[i])
        {
            if(!st.count(j))
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            ans++;
        }
    
     }
        return ans;
    }
};