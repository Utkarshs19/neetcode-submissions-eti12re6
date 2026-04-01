class Solution {
public:
    bool isHappy(int n) {

        set<int> st;
        st.insert(n);
        int x=n;
        while(true)
        {
            
            int y=0;
            while(x>0)
            {
                y+=((x%10) * (x%10));
                x=x/10;
            }
            cout<<y<<endl;
            if(y==1)return true;
            if(st.count(y))return false;
            st.insert(y);
            x=y;
        }

        return false;
        
    }
};
