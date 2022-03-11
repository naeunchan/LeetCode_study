/**
 * @param {character[][]} board
 * @return {boolean}
 */
var isValidSudoku = function(board) {
    const rowCheck = (num, x, y) => {
        for(let i = x + 1; i < 9; i++){
            if(board[i][y] === num){
                return false;
            }
        }
        
        return true;
    }
    
    const colCheck = (num, x, y) => {
        for(let i = y + 1; i < 9; i++){
            if(board[x][i] === num){
                return false;
            }
        }
        
        return true;
    }
    
    const boxCheck = (num, x, y) => {
        for(let i = Math.floor(x / 3) * 3; i < Math.floor(x / 3) * 3 + 3; i++){
            for(let j = Math.floor(y / 3) * 3; j < Math.floor(y / 3) * 3 + 3; j++){
                if(i !== x && j !== y && board[i][j] === num){
                    return false;
                }
            }
        }
        
        return true;
    }
    
    for(let i = 0; i < 9; i++){
        for(let j = 0; j < 9; j++){
            if(board[i][j] !== "."){
                if(!rowCheck(board[i][j], i, j)){
                    return false;
                }
                
                if(!colCheck(board[i][j], i, j)){
                    return false;
                }
                
                if(!boxCheck(board[i][j], i, j)){
                    return false;
                }
            }
        }
    }
    
    return true;
};