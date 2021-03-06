class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int min = prices[0];
        
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < min){
                min = prices[i];
            }
            else{
                ans = ans < prices[i] - min ? prices[i] - min : ans;
            }
        }
        
        return ans;
    }
};