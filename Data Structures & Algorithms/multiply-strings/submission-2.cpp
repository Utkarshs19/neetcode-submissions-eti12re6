class Solution {
public:
    string multiply(string num1, string num2) {

        int n1=0,n2=0;
        if(num1=="0" || num2=="0")return "0";

        for(int i=0;i<num1.length();i++)
        {
            n1=n1*10+(num1[i]-'0');
        }
        for(int j=0;j<num2.length();j++)
        {
            n2=n2*10+(num2[j]-'0');
        }

        long long mul=1ll*n1*n2;

        string ans;

        while(mul>0)
        {
            ans+=(to_string(mul%10));
            mul=mul/10;
        }

        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
