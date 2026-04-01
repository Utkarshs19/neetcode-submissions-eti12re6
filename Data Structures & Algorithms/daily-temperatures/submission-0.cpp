class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        vector<int> ans(temperatures.size(),0);

        stack<pair<int,int>> st;
        int n=temperatures.size();

        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push({temperatures[i],i});
            }
            else
            {   
                
                while(!st.empty() && st.top().first<temperatures[i])
                {
                    ans[st.top().second]=i-st.top().second;
                    st.pop();
                }
                
                    st.push({temperatures[i],i});
                
            }
        }

        return ans;
        
    }
};
