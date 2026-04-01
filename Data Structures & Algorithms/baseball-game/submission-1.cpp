class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> st;

        int ans=0;

        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="+")
            {
                int x=st.top();st.pop();
                int y=st.top();
                st.push(x);
                st.push(x+y);
                ans+=(x+y);
            }
            else if(operations[i]=="D")
            {
                ans+=(2*st.top());
                st.push(2*st.top());
            }
            else if(operations[i]=="C")
            {
                ans-=st.top();
                st.pop();
            }
            else
            {
                st.push({stoi(operations[i])});
                ans+=st.top();
            }
        }

        return ans;
        
    }
};