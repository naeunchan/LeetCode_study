const uniquePathsWithObstacles = (obstacleGrid) => {
    const m = obstacleGrid.length;
    const n = obstacleGrid[0].length;
    const dp = Array.from({length: m}, () => Array(n).fill(0));
    
    dp[0][0] = !obstacleGrid[0][0];
    
    for(let i = 0; i < m; i++){
        for(let j = 0; j < n; j++){
            if(obstacleGrid[i][j]){
                continue;
            }
            
            if(i === 0){
                if(j === 0){
                    continue;
                } else{
                    dp[i][j] += dp[i][j - 1];
                }
            } else{
                if(j === 0){
                    dp[i][j] += dp[i - 1][j];
                } else{
                    dp[i][j] += dp[i - 1][j] + dp[i][j - 1];
                }
            }
        }
    }
    
    return dp[m - 1][n - 1];
};