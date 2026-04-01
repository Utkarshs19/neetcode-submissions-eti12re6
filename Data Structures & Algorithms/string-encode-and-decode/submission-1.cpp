class Solution {
public:
    vector<string> ans;

    string encode(vector<string>& strs) {

        for(int i=0;i<strs.size();i++)
        ans.push_back(strs[i]);

        return " ";

    }

    vector<string> decode(string s) {
    return ans;
    }
};
