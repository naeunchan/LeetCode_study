/**
 * @param {number[]} nums
 * @return {number}
 */
var rob = function(nums) {
    const length = nums.length;
    const dp = Array(length).fill(0);
    
    dp[0] = nums[0];
    
    for(let i = 1; i < length; i++){
        dp[i] = Math.max(nums[i] + (dp[i - 2] || 0), dp[i - 1]);
    }
    
    return dp[length - 1];
};