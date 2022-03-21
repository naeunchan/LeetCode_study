/**
 * @param {number[][]} matrix
 * @return {number[]}
 */
var spiralOrder = function(matrix) {
    const m = matrix.length;
    const n = matrix[0].length;
    const direct = [[0, 1], [1, 0], [0, -1], [-1, 0]];
    const visited = Array.from({length: m}, () => Array(n).fill(false));
    const answer = [];
    let x = 0;
    let y = 0;
    let d = 0;
    
    const rangeCheck = (x, y) => x >= 0 && x < m && y >= 0 && y < n;
    
    while(answer.length !== m * n){
        visited[x][y] = true;
        answer.push(matrix[x][y]);
        
        if(!rangeCheck(x + direct[d][0], y + direct[d][1]) || visited[x + direct[d][0]][y + direct[d][1]]){
            d = (d + 1) % 4;
        }
        
        x += direct[d][0];
        y += direct[d][1];
    }
    
    return answer;
};