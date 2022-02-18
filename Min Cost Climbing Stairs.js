/**
 * @param {number[]} cost
 * @return {number}
 */
var minCostClimbingStairs = function(cost) {
    const length = cost.length;
    const dp = Array(length).fill(0);
    
    dp[0] = cost[0];
    dp[1] = Math.min(cost[0] + cost[1], cost[1]);
    
    for(let i = 2; i < length; i++){
        dp[i] = Math.min(cost[i] + dp[i - 1], cost[i] + dp[i - 2]);
    }
    
    return Math.min(dp[length - 1], dp[length - 2]);
};