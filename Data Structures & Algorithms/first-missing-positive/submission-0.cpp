class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        set<int> st;
        for(int i=0;i<nums.size();i++)
        st.insert(nums[i]);

        int k=1;
        while(true)
        {
            if(st.find(k)==st.end())return k;
            k++;
        }

        return k;
        
    }
};