const orangesRotting = (grid) => {
    let answer = 0;
    let orange = 0;
    const m = grid.length;
    const n = grid[0].length;
    const queue = [];
    const direct = [[-1, 0], [1, 0], [0, -1], [0, 1]];
    
    for(let i = 0; i < m; i++){
        for(let j = 0; j < n; j++){
            if(grid[i][j] === 1){
                orange++;
            } else if(grid[i][j] === 2){
                queue.push([i, j]);
            }
        }
    }
    
    if(!orange){
        return 0;
    }
    
    while(queue.length){
        let length = queue.length;
        
        while(length--){
            const [x, y] = queue.shift();
            
            for(let i = 0; i < 4; i++){
                const nx = x + direct[i][0];
                const ny = y + direct[i][1];

                if(nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny] === 1){
                    orange--;
                    grid[nx][ny] = 2;
                    queue.push([nx, ny]);
                }
            }
        }
        answer++;
    }
    
    return orange > 0 ? -1 : answer - 1;
};