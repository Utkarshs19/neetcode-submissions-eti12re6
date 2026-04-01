class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> st;

        for(int i=0;i<asteroids.size();i++)
        {
           
           if(asteroids[i]>0)
           {
                st.push(asteroids[i]);
           }
           else
           {
                if(!st.empty() && st.top()>0)
                {
                    bool flag=true;
                    while(!st.empty() && st.top()>0)
                    {
                        if(st.top()<abs(asteroids[i]))
                        st.pop();
                        else if(st.top()==abs(asteroids[i]))
                        {
                            st.pop();
                            flag=false;
                            break;
                        }
                        else {
                            flag=false;
                            break;
                        }
                    }
                    if(flag==true)st.push(asteroids[i]);
                    
                }
                else st.push(asteroids[i]);
           }

        }

        vector<int> ans;

        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};