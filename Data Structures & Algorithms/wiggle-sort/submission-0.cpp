class Solution {
public:
    void wiggleSort(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        vector<int> v;
        int l=0,r=nums.size()-1;

        while(l<r)
        {
            v.push_back(nums[l]);
            v.push_back(nums[r]);
            l++;
            r--;
        }
        nums=v;
        
    }
};
