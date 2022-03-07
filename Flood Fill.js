const floodFill = (image, sr, sc, newColor) => {
    const m = image.length;
    const n = image[0].length;
    const visited = Array.from({length: m}, () => Array(n).fill(false));
    const direct = [[-1, 0], [1, 0], [0, -1], [0, 1]];
    const queue = [];
    const color = image[sr][sc];
    
    image[sr][sc] = newColor;
    queue.push([sr, sc]);
    visited[sr][sc] = true;
    
    while(queue.length){
        const [x, y] = queue.shift();
        
        for(let i = 0; i < 4; i++){
            const nx = x + direct[i][0];
            const ny = y + direct[i][1];
            
            if(nx >= 0 && nx < m && ny >= 0 && ny < n && !visited[nx][ny] && image[nx][ny] === color){
                image[nx][ny] = newColor;
                visited[nx][ny] = true;
                queue.push([nx, ny]);
            }
        }
    }
    
    return image;
};