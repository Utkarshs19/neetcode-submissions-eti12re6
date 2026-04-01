class Solution {
public:
    vector<vector<int>> highFive(vector<vector<int>>& items) {
        
        map<int,vector<int>> m;
        for(int i=0;i<items.size();i++)
        {
            m[items[i][0]].push_back(items[i][1]);
        }
        vector<vector<int>> ans;
        for(auto i:m)
        {
            sort(i.second.begin(),i.second.end());
            reverse(i.second.begin(),i.second.end());
            int x=0;

            x+=i.second[0];
            x+=i.second[1];x+=i.second[2];x+=i.second[3];
            x+=i.second[4];

            x=x/5;

            ans.push_back({i.first,x});

        }

        return ans;

    }
};
