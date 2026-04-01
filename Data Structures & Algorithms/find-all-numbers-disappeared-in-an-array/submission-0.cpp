class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        int i=1;
        unordered_set<int> st;
        for(auto i:nums)
        st.insert(i);
        int n=nums.size();
        vector<int> ans;
        for(int i=1;i<=n;i++)
        {
            if(!st.count(i))ans.push_back(i);
        }
        return ans;
        
    }
};