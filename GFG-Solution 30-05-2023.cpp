

class Solution
{    
    public boolean isPossible(char[][] board, int i, int j){
        if(i >= 0 && i < board.length && j >= 0 && j < board[0].length && board[i][j] != ' '){
            return true;
        }
        return false;
    }
    
    public boolean helper(char[][] board, String word, int i, int j, int si){
        char temp = board[i][j];
        if(si >= word.length()){
            return false;
        }
        if(board[i][j] != word.charAt(si)){
            return false;
        }
        if(si == word.length() - 1){
            return true;
        }
        boolean res = false;
        board[i][j] = ' '; // Mark current cell as visited
        if(isPossible(board, i, j + 1)){
            res = helper(board, word, i, j + 1, si + 1);
            if(res){
                return true;
            }
        }
        if(isPossible(board, i + 1, j)){
            res = helper(board, word, i + 1, j, si + 1);
            if(res){
                return true;
            }
        }
        if(isPossible(board, i, j - 1)){
            res = helper(board, word, i, j - 1, si + 1);
            if(res){
                return true;
            }
        }
        if(isPossible(board, i - 1, j)){
            res = helper(board, word, i - 1, j, si + 1);
            if(res){
                return true;
            }
        }
        board[i][j] = temp; // Restore the original value
        return res;
    }
    
    public boolean isWordExist(char[][] board, String word){
        boolean res = false;
        for(int i = 0; i < board.length; i++){
            for(int j = 0; j < board[0].length; j++){
                if(board[i][j] == word.charAt(0)){
                    res = helper(board, word, i, j, 0);
                    if(res){
                        return res;
                    }
                }
            }
        }
        return res;
    }

}
