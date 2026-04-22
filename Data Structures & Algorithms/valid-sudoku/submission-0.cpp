class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();

        for(int i =0 ; i<n ; i++){
            for(int j =0; j<n ; j++){

                if(board[i][j]=='.'){
                    continue;
                }
                else{
                    char ch = board[i][j];

                    for(int k =0 ; k<9; k++){
                        if( k!=j && board[i][k]==ch){
                            return false;
                        }
                    }

                    for(int k=0; k<9; k++){
                        if(k!=i && board[k][j]==ch){
                            return false;
                        }
                    }

                    int startrow= 3 * (i/3);
                    int startcol= 3 * (j/3);

                    for(int row =startrow ; row<startrow+3; row++){
                        for( int col = startcol; col<startcol+3; col++){
                            if(row!=i && col!=j && board[row][col]==ch){
                                return false;
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};
