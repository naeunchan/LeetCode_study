const maxSubArray = (nums) => {
    const dp = Array.from({length: nums.length}, () => 0);
    let answer = -1000000;
    
    dp[0] = nums[0];
    
    for(let i = 0; i < nums.length; i++){
        dp[i] = nums[i] < dp[i - 1] + nums[i] ? dp[i - 1] + nums[i] : nums[i];
        answer = answer < dp[i] ? dp[i] : answer;
    }
    
    return answer;
};