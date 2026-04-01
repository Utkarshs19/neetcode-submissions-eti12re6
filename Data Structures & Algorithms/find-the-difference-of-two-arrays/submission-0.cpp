class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> s1,s2;
        for(auto i:nums1)s1.insert(i);
        for(auto i:nums2)
        {
            if(s1.count(i))s1.erase(i);
        }
        for(auto i:nums2)
        {
            s2.insert(i);
        }
        for(auto i:nums1)
        {
            if(s2.count(i))s2.erase(i);
        }
        return {vector(s1.begin(),s1.end()),vector(s2.begin(),s2.end())};

    }
};