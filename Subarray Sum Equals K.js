const subarraySum = (nums, k) => {
    let answer = 0;
    let sum = 0;
    const map = new Map();
    
    map.set(0, 1);
    
    for(let i = 0; i < nums.length; i++){
        sum += nums[i];
        
        if(map.get(sum - k)){
            answer += map.get(sum - k);
        }
        
        map.set(sum, (map.get(sum) ?? 0) + 1);
    }
    
    return answer;
};