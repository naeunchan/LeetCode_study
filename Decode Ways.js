const numDecodings = (s) => {
    const length = s.length;
    const dp = Array(length + 1).fill(0);
    
    if(s[0] === "0"){
        return 0;
    }
    
    dp[length] = 1;
    dp[length - 1] = parseInt(s[length - 1]) ? 1 : 0;
    
    for(let i = length - 2; i >= 0; i--){
        const num = s.slice(i, i + 2);
        
        if(s[i] === "0"){
            dp[i] = 0;
        } else if(parseInt(num) <= 26){
            dp[i] = dp[i + 1] + dp[i + 2];
        } else{
            dp[i] = dp[i + 1];
        }
    }
    
    return dp[0];
};