class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int size=nums1.size()+nums2.size();

        priority_queue<int> pq;

        int x=size/2;

        x=x+1;

        for(int i=0;i<nums1.size();i++)
        {
            pq.push(nums1[i]);
            if(pq.size()>x)pq.pop();
        }
        for(int i=0;i<nums2.size();i++)
        {
            pq.push(nums2[i]);
            if(pq.size()>x)pq.pop();
        }

        if(size%2==1)
        return pq.top()/1.0;
        else
        {
            int a=pq.top();pq.pop();
            int b=pq.top();

            return (a+b)/2.0;
        }




    }
};
