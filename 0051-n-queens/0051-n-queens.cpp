class Solution {
public:
    bool isValid(int i, int j, vector<string>& board, int n){
        int tempi=i, tempj=j;
        while(tempi>=0){
            if(board[tempi][tempj]=='Q')return false;
            tempi--;
        }
        tempi=i;
        while(tempi>=0&&tempj>=0){
            if(board[tempi][tempj]=='Q')return false;
            tempi--;
            tempj--;
        }
        tempi=i, tempj=j;
        while(tempi>=0&&tempj<n){
            if(board[tempi][tempj]=='Q')return false;
            tempi--;
            tempj++;
        }
        return true;
    }
    void solve(int row, vector<string>& board, vector<vector<string>>& boards, int n){
        if(row>=n){
            boards.push_back(board);
            return;
        }
        for(int col=0; col<n; col++){
            if(isValid(row, col, board, n)){
                board[row][col]='Q';
                solve(row+1, board, boards, n);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> boards;
        vector<string> board;
        for(int i=0; i<n; i++){
            string str;
            for(int j=0; j<n; j++){
                str+='.';
            }
            board.push_back(str);
        }
        solve(0, board, boards, n);
        return boards;
    }
};