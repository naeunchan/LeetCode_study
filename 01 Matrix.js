const updateMatrix = (mat) => {
    const m = mat.length;
    const n = mat[0].length;
    const direct = [[-1, 0], [1, 0], [0, -1], [0, 1]];
    const queue = [];
    const checkRange = (x, y) => x >= 0 && x < m && y >= 0 && y < n;
    
    for(let i = 0; i < m; i++){
        for(let j = 0; j < n; j++){
            if(mat[i][j] === 0){
                queue.push([i, j]);
            } else{
                mat[i][j] = -1;
            }
        }
    }
    
    while(queue.length){
        const [x, y] = queue.shift();
        
        for(let i = 0; i < 4; i++){
            const nx = x + direct[i][0];
            const ny = y + direct[i][1];
            
            if(checkRange(nx, ny) && mat[nx][ny] === -1){
                mat[nx][ny] = mat[x][y] + 1;
                queue.push([nx, ny]);
            }
        }
    }
    
    return mat;
};