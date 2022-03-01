const minimumTotal = (triangle) => {
    const length = triangle.length;
    
    for(let i = length - 2; i >= 0; i--){
        for(let j = 0; j < triangle[i].length; j++){
            triangle[i][j] += Math.min(triangle[i + 1][j], triangle[i + 1][j + 1]);
        }
    }
    
    return triangle[0][0];
};