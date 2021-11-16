/**
 * @param {character[][]} grid
 * @return {number}
 */
const numIslands = (grid) => {
    let answer = 0;
    const m = grid.length;
    const n = grid[0].length;
    const visited = Array.from({length: m}, () => Array(n).fill(false));
    const directX = [-1, 1, 0, 0];
    const directY = [0, 0, -1, 1];
    
    const dfs = (x, y) => {
        for(let i = 0; i < 4; i++){
            const nx = x + directX[i];
            const ny = y + directY[i];
            
            if(nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny] === "1" && !visited[nx][ny]){
                visited[nx][ny] = true;
                dfs(nx, ny);
            }
        }
    }
    
    for(let i = 0; i < m; i++){
        for(let j = 0; j < n; j++){
            if(grid[i][j] === "1" && !visited[i][j]){
                answer++;
                visited[i][j] = true;
                dfs(i, j);
            }
        }
    }
    
    return answer;
};