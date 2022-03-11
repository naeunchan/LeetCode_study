var maxProfit = function(prices) {
    const length = prices.length;
    let buy = prices[0];
    let profit = 0;
    
    for(let i = 1; i < length; i++){
        buy = Math.min(buy, prices[i]);
        profit = Math.max(profit, prices[i] - buy);
    }
    
    return profit;
};