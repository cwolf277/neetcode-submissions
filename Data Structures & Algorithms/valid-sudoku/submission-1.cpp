class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        
        for(int i =0; i< 9; i++){
        unordered_set<char> col;
        unordered_set<char> row;
        int countrow = 0;
        int countcol = 0;
            for(int j =0; j<9; j++){
                char valcol = board[i][j];
                if(valcol != '.'){
                    col.insert(valcol);
                    countcol++;
                }
                char valrow = board[j][i];
                if(valrow != '.'){
                    row.insert(valrow);
                    countrow++;
                }
            }
            if(countrow != row.size() || countcol != col.size()){
            return false;
        }
        }
           
        for(int i =0; i< 9; i+=3){
            for(int j =0; j< 9; j+=3){
            unordered_set<char> box;
             int boxcount =0;
             for(int k =0; k< 3; k++){
                for(int l = 0; l< 3; l++){
                    char boxval = board[i+k][j+l];
                    if(boxval != '.'){
                        boxcount++;
                        box.insert(boxval);



                }
                }
             }
             if(boxcount != box.size()){
                return false;
             }
            }
        }


        return true;
        
    }
};
