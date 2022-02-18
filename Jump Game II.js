/**
 * @param {number[]} nums
 * @return {number}
 */
var jump = function(nums) {
    const length = nums.length;
    const dp = Array(length).fill(Infinity);
    
    if(length === 1){
        return 0;
    }
    
    dp[0] = 0;
    
    for(let i = 0; i < length; i++){
        const distance = nums[i];
        const next = dp[i] + 1;
        
        for(let j = 1; j <= distance; j++){
            if(i + j >= length){
                break;
            }
            dp[i + j] = Math.min(next, dp[i + j]);
        }
    }
    
    return dp[length - 1];
};