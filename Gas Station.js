const checkCircuit = (goal, remainingGas, length) => {
    let goingIndex = goal + 1;
    let currentGas = remainingGas[goal];
    
    if(goingIndex === length){
        goingIndex = 0;
    }
    
    while(goingIndex !== goal){
        currentGas += remainingGas[goingIndex++];
        
        if(currentGas < 0){
            return false;
        }
        
        if(goingIndex === length){
            goingIndex = 0;
        }
    }
    
    return true;
}

const canCompleteCircuit = (gas, cost) => {
    const length = gas.length;
    const remainingGas = Array(length + 1).fill(0);
    const startIndex = [];
    let minusGas = 0;
    let plusGas = 0;
    
    
    for(let i = 0; i < length; i++){
        remainingGas[i] = gas[i] - cost[i];
        
        if(remainingGas[i] >= 0){
            startIndex.push(i);
            plusGas += remainingGas[i];
        } else{
            minusGas += remainingGas[i];
        }
    }
    
    if(plusGas + minusGas < 0){
        return -1;
    }
    
    for(let i = 0; i < startIndex.length; i++){
        if(checkCircuit(startIndex[i], remainingGas, length)){
            return startIndex[i];
        }
    }
    
    return -1;
};