class Solution {
public:
    string addBinary(string a, string b) {

        int i=a.length()-1;
        int j=b.length()-1;
        int carry=0;

        string ans;

        while(i>=0 && j>=0)
        {
            if(a[i]=='1' && b[j]=='1' && carry==1)
            {
                ans+='1';
            }
            else if(a[i]=='1' && b[j]=='1' && carry==0)
            {
                ans+='0';
                carry=1;
            }
            else if((a[i]=='1' || b[j]=='1') && carry==1)
            {
                ans+='0';
            }
            else if((a[i]=='1' || b[j]=='1') && carry==0)
            {
                ans+='1';
            }
            else
            {
                if(carry==1)
                {
                    ans+='1';
                    carry=0;
                }
                else
                ans+='0';
            }
            i--;
            j--;
        }
            while(i>=0)
            {
                if(carry==1)
                {
                    if(a[i]=='1')
                    {
                        ans+='0';
                    }
                    else
                    {
                        ans+='1';
                        carry=0;
                    }
                }
                else
                ans+=a[i];

                i--;
            }

        while(j>=0)
            {
                if(carry==1)
                {
                    if(b[j]=='1')
                    {
                        ans+='0';
                    }
                    else
                    {
                        ans+='1';
                        carry=0;
                    }
                }
                else
                ans+=b[j];

                j--;
            }
            if(carry)ans+='1';
            reverse(ans.begin(),ans.end());

            return ans;
        
        
    }
};