const canJump = (nums) => {
    const length = nums.length - 1;
    let going = 0;
    
    // size가 1인 배열 가지치기
    if(!length){
        return true;
    }
    
    for(let i = 0; i < length; i++){
        going = Math.max(going, i + nums[i]);
        
        // 다음 위치와 현재 위치가 같으면 false
        if(going === i){
            return false;
        }
        
        // 도착지점에 도달하면 true
        if(going >= length){
            return true;
        }
    }
    
    return true;
};