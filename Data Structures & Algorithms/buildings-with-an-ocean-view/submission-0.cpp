class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {

        vector<int> ans;
        stack<int> st;

        for(int i=heights.size()-1;i>=0;i--)
        {
            if(st.empty())
            {
                ans.push_back(i);
                st.push(heights[i]);
            }
            else
            {
                if(st.top()<heights[i])
                {
                    st.pop();
                    ans.push_back(i);
                    st.push(heights[i]);
                }
            }
        }

        sort(ans.begin(),ans.end());

        return ans;
        
    }
};