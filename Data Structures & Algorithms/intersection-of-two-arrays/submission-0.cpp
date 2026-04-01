class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> ans;
        set<int> st;
        for(auto i:nums1)
        {
            st.insert(i);
        }

        for(auto i:nums2)
        {
            if(st.count(i))
            ans.insert(i);
        }

        return vector<int>(ans.begin(),ans.end());
    }
};