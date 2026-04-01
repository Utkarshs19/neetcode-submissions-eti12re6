class TicTacToe {
public:
    vector<vector<int>> v;
    int n;
    TicTacToe(int n) {
        this->n=n;
        v.resize(n,vector<int>(n));
    }
    
    int move(int row, int col, int player) {

        v[row][col]=player;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(v[i][col]==player)cnt++;
        }
        if(cnt==n)return player;
        cnt=0;

        for(int i=0;i<n;i++)
        {
            if(v[row][i]==player)cnt++;
        }
        if(cnt==n)return player;
        
        cnt=0;
        for(int i=0;i<n;i++)
        {
            if(v[i][i]==player)cnt++;
        }
        if(cnt==n)return player;

        cnt=0;

        int x=n-1;
        int y=0;

        for(int i=0;i<n;i++)
        {
            if(v[y][x]==player)cnt++;
            y++;
            x--;
        }
        if(cnt==n)return player;


        return 0;
        
    }
};

/**
 * Your TicTacToe object will be instantiated and called as such:
 * TicTacToe* obj = new TicTacToe(n);
 * int param_1 = obj->move(row,col,player);
 */
