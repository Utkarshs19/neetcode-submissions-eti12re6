class Solution {
public:
    map<char,vector<char>> m;
    vector<string> ans;
    string str="";
    void helper(int i,string digits)
    {
        if(i==digits.length())
        {
            ans.push_back(str);
            return;
        }

        for(auto j:m[digits[i]])
        {
            str+=j;
            helper(i+1,digits);
            str.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {

        m['2']={'a','b','c'};
        m['3']={'d','e','f'};
        m['4']={'g','h','i'};
        m['5']={'j','k','l'};
        m['6']={'m','n','o'};
        m['7']={'p','q','r','s'};
        m['8']={'t','u','v'};
        m['9']={'w','x','y','z'};

        if(digits.size()==0)return ans;
        
        helper(0,digits); 

        return ans;       
    }
};
