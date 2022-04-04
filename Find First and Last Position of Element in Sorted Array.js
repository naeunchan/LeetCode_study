var searchRange = function(nums, target) {
    const answer = [-1, -1];
    let front = 0;
    let back = nums.length;
    let found = false;
    
    if(!nums.length){
        return answer;
    }
    
    while(front <= back){
        const mid = Math.floor((front + back) / 2);
        
        if(nums[mid] < target){
            front = mid + 1;
        } else if(nums[mid] > target){
            back = mid - 1;
        } else{
            back = mid - 1;
            
            if(nums[mid] === target){
                found = true;    
            }
        }
    }
    
    if(found){
        answer[0] = front;
        
        for(let i = front; i < nums.length; i++){
            if(nums[i] === target){
                answer[1] = i;
            }
        }
    }
    
    return answer;
};