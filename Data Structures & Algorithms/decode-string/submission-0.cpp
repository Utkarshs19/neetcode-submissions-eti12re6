class Solution {
public:
    string decodeString(string s) {

        stack<string> st;
        stack<int> s1;

        string ans;

        int i=0;
        while(i<s.length())
        {
            if(isdigit(s[i]))
            {
                int x=0;
                while(i<s.length() && isdigit(s[i]))
                {
                    x=x*10+(s[i]-'0');
                    i++;
                }
                s1.push(x);
                continue;
            }
            else if(s[i]==']')
            {
                stack<string>str;
                while(!st.empty() && st.top()!="[")
                {
                    str.push(st.top());
                    st.pop();
                }
                st.pop();
                string abc;
                while(!str.empty())
                {
                    abc+=str.top();
                    str.pop();
                }

                int x=s1.top();
                s1.pop();
                string xyz;
                for(int j=0;j<x;j++)
                {
                    xyz+=abc;
                }

                st.push(xyz);

            }
            else
            {
                string str;
                str+=s[i];
                st.push(str);
            }

            i++;
        }

        stack<string> a;

        while(!st.empty())
        {
            a.push(st.top());
            st.pop();
        }

        while(!a.empty())
        {
            ans+=a.top();
            a.pop();
        }


        return ans;
        
    }
};