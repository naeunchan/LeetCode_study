var solution = function(isBadVersion) {
    return function(n) {
        let front = 0;
        
        while(front <= n){
            const mid = Math.floor((front + n) / 2);
            
            if(!isBadVersion(mid)){
                front = mid + 1;
            } else{
                n = mid - 1;
            }
        }
        
        return front;
    };
};