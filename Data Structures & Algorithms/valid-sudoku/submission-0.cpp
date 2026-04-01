class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {


        for(int i=0;i<9;i+=3)
        {
            for(int j=0;j<9;j+=3)
            {
                map<char,int> m;
                for(int a=i;a<i+3;a++)
                {
                    for(int b=j;b<j+3;b++)
                    {
                        if(board[a][b]=='.')continue;
                        m[board[a][b]]++;
                        if(m[board[a][b]]>1)return false;
                    }
                }
            }
        }

        for(int i=0;i<9;i++)
        {
            map<char,int> m;
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')continue;
                m[board[i][j]]++;
                if(m[board[i][j]]>1)return false;
            }
        }

        for(int i=0;i<9;i++)
        {
            map<char,int> m;
            for(int j=0;j<9;j++)
            {
                if(board[j][i]=='.')continue;
                m[board[j][i]]++;
                if(m[board[j][i]]>1)return false;
            }
        }

        return true;
        
    }
};
