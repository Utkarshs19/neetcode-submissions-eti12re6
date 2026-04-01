class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        vector<int> ans;

        map<int,int> m;
        for(auto i:nums)m[i]++;

        vector<pair<int,int>> v;
        for(auto i:m)
        {
            v.push_back({i.second,i.first});
        }
        sort(v.begin(), v.end(), [](const auto &a, const auto &b) {
    if (a.first == b.first) return a.second > b.second;
    return a.first < b.first;
});
        for(int i=0;i<v.size();i++)
        {
            int x=v[i].first;
            while(x>0){
            ans.push_back(v[i].second);
            x--;
            }
        }

        return ans;
        
    }
};