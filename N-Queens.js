const solveNQueens = (n) => {
    const answer = [];
    let board = Array.from({length: n}, () => Array(n).fill("."));
    
    const isPossible = (x, y) => {
        //up
        for(let i = x - 1; i >= 0; i--){
            if(board[i][y] === "Q"){
                return false;
            }
        }
        
        //down
        for(let i = x + 1; i < n; i++){
            if(board[i][y] === "Q"){
                return false;
            }
        }
        
        //left
        for(let i = y - 1; i >= 0; i--){
            if(board[x][i] === "Q"){
                return false;
            }
        }
        
        //right
        for(let i = y + 1; i < n; i++){
            if(board[x][i] === "Q"){
                return false;
            }
        }
        
        //upper left
        for(let i = x - 1, j = y - 1; i >= 0 && j >= 0; i--, j--){
            if(board[i][j] === "Q"){
                return false;
            }
        }
        
        //upper right
        for(let i = x - 1, j = y + 1; i >= 0 && j < n; i--, j++){
            if(board[i][j] === "Q"){
                return false;
            }
        }
        
        //lower left
        for(let i = x + 1, j = y - 1; i < n && j >= 0; i++, j--){
            if(board[i][j] === "Q"){
                return false;
            }
        }
        
        //lower right
        for(let i = x + 1, j = y + 1; i < n && j < n; i++, j++){
            if(board[i][j] === "Q"){
                return false;
            }
        }
        
        return true;
    }
    
    const dfs = (x, queen) => {
        if(!queen){
            answer.push(board.slice().map(b => b.join("")));
            return;
        }
        
        for(let j = 0; j < n; j++){
            if(isPossible(x, j)){
                board[x][j] = "Q";
                dfs(x + 1, queen - 1);
                board[x][j] = ".";
            }
        }
    };
    
    dfs(0, n);
    
    return answer;
};