const maxAreaOfIsland = (grid) => {
    const m = grid.length;
    const n = grid[0].length;
    const visited = Array.from({length: m}, () => Array(n).fill(false));
    const direct = [[-1, 0], [1, 0], [0, -1], [0, 1]];
    let answer = 0;
    
    const bfs = (sx, sy) => {
        const queue = [];
        let area = 1;
        
        queue.push([sx, sy]);
        visited[sx][sy] = true;
        
        while(queue.length){
            const [x, y] = queue.shift();

            for(let k = 0; k < 4; k++){
                const nx = x + direct[k][0];
                const ny = y + direct[k][1];

                if(nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny] && !visited[nx][ny]){
                    area++;
                    queue.push([nx, ny]);
                    visited[nx][ny] = true;
                }
            }

            answer = answer < area ? area : answer;
        }
    }
    
    for(let i = 0; i < m; i++){
        for(let j = 0; j < n; j++){
            if(grid[i][j] && !visited[i][j]){
                bfs(i, j);
            }
        }
    }
    
    return answer;
};