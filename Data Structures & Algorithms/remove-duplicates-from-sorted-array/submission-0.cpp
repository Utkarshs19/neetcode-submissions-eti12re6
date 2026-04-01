class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        set<int> st;
        for(auto i:nums)
        st.insert(i);
        int k=0;
        for(auto i:st)
        {
            nums[k]=i;
            k++;
        }

        return st.size();
        
    }
};