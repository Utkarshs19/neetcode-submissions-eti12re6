class Solution {
public:
    set<pair<int,int>> st;
    bool inboard(int i,int j,const vector<vector<char>> &board)
    {
        return i>=0 && j>=0 && i<board.size() && j<board[0].size();
    }
    bool helper(int i,int j,vector<vector<char>>& board,string word,int k)
    {
        if(!inboard(i,j,board))return false;
        if(st.count({i,j}))return false;
        if(board[i][j]==word[k] && k==word.size()-1)return true;

        st.insert({i,j});
        cout<<i<<" "<<j<<endl;
        if(board[i][j]==word[k])
        {
            if(helper(i+1,j,board,word,k+1))return true;

            if(helper(i-1,j,board,word,k+1))return true;

            if(helper(i,j+1,board,word,k+1))return true;

            if(helper(i,j-1,board,word,k+1))return true;

        }
        st.erase({i,j});
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {

        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]==word[0])
                {
                    st.clear();
                    if(helper(i,j,board,word,0))return true;
                }
            }
        }

        return false;
        
    }
};
