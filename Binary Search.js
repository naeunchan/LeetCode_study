const search = (nums, target) => {
    let answer = 0;
    let front = 0;
    let back = nums.length - 1;
    
    while(front <= back){
        const mid = Math.floor((front + back) / 2);
        
        if(nums[mid] === target){
            return mid;
        }
        
        if(nums[mid] < target){
            front++;
        } else{
            back--;
        }
    }
    
    return -1;
};