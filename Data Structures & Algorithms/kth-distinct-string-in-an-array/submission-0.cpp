class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {

        map<string,int> m;
        for(auto i:arr)m[i]++;

        int x=1;
        string str;
        for(int i=0;i<arr.size();i++)
        {
            if(m[arr[i]]==1)
            {
                if(x==k){
                    str=arr[i];
                    break;
                    }
                else
                x++;
            }
        }

        return str;

    }
};