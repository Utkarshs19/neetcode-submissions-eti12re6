class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]==')' || s[i]==']' || s[i]=='}')
            {
                if(st.size()==0)return false;
                if(s[i]==')' && st.top()=='(')st.pop();
                else if(s[i]==']' && st.top()=='[')st.pop();
                else if(s[i]=='}' && st.top()=='{')st.pop();
                else return false;
            }
            else
            st.push(s[i]);
        }
        
        return st.size()==0;
    }
};
