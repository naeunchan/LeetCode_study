const checkInclusion = (s1, s2) => {
    const map = new Map();
    const length = s1.length;
    
    for(let i = 0; i < s1.length; i++){
        const val = map.get(s1[i]) || 0;
        
        map.set(s1[i], val + 1);
    }
    
    for(let i = 0; i < s2.length; i++){
        if(map.has(s2[i])){
            const checkMap = new Map(map);
            
            for(let j = 0; j < s1.length; j++){
                const key = s2[i + j];
                const val = checkMap.get(key);
                
                if(!val){
                    break;
                }
                
                if(val - 1 === 0){
                    checkMap.delete(key);
                } else{
                    checkMap.set(key, val - 1);
                }
            }
            
            if(checkMap.size === 0){
                return true;
            }
        }
    }
    
    return false;
};