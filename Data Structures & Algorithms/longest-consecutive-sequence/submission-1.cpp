class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size()==0)return 0;
        set<int> st;
        for(auto i:nums)st.insert(i);

        vector<int> v;
        for(auto i:st)
        v.push_back(i);

        int i=0,j=0;
        int ans=0;
        while(j<v.size()-1)
        {
            if(v[j]+1==v[j+1])j++;
            else{
            ans=max(ans,j-i+1);
            j++;
            i=j;
            }
        }
        ans=max(ans,j-i+1);
        return ans;
        
    }
};
