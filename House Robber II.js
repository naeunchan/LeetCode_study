const rob = (nums) => {
    const length = nums.length;
    const dp1 = Array(length).fill(0);
    const dp2 = Array(length).fill(0);
    
    dp1[0] = nums[0];
    dp1[1] = nums[0];
    dp2[1] = nums[1];
    
    for(let i = 2; i < length; i++){
        if(i !== length - 1){
            dp1[i] = Math.max(dp1[i - 1], dp1[i - 2] + nums[i]);
        } else{
            dp1[i] = dp1[i - 1];
        }
        
        dp2[i] = Math.max(dp2[i - 1], dp2[i - 2] + nums[i]);
    }
    
    return Math.max(dp1[length - 1], dp2[length - 1]);
};