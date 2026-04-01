class Solution {
public:
    int maxArea(vector<int>& heights) {

        int low=0;
        int high=heights.size()-1;

        int ans=INT_MIN;

        while(low<high)
        {
            ans=max(ans,min(heights[low],heights[high])*(high-low));
            
            if(heights[low]<=heights[high])low++;
            else high--;
        }
        
        return ans;
    }
};
