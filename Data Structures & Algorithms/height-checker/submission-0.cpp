class Solution {
public:
    int heightChecker(vector<int>& heights) {

        vector<int> v=heights;
        sort(v.begin(),v.end());
        int ans=0;
        int i=0,j=0;
        int n=heights.size();
        while(i<n && j<n)
        {
            if(heights[i]!=v[j])ans++;
            i++;
            j++;
        }

        return ans;
        
    }
};