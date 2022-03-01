const searchInsert = (nums, target) => {
    let front = 0;
    let back = nums.length - 1;
    
    while(front <= back){
        const mid = Math.floor((front + back) / 2);
        
        if(nums[mid] === target){
            return mid;
        }
        
        if(nums[mid] < target){
            front = mid + 1;
        } else{
            back = mid - 1;
        }
    }
    
    return front;
};