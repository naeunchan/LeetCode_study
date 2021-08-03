class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n + 1, 0);
        
        if(n > 0){
            dp[1] = 1;

            for(int i = 2; i <= n; i++){
                if(i % 2){
                    dp[i] = 1 + dp[i / 2];
                }
                else{
                    dp[i] = dp[i / 2];
                }
            } 
        }
        
        return dp;
    }
};