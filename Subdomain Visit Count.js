const subdomainVisits =(cpdomains) => {
    const answer = [];
    const map = new Map();
    
    
    for(let i = 0; i < cpdomains.length; i++){
        const splitedString = cpdomains[i].split(" ");
        const rep = parseInt(splitedString[0]);
        const domains = splitedString[1].split(".");
        
        for(let j = 0; j < domains.length; j++){
            const key = domains.slice(-j).join(".");
            const value = map.get(key) ?? [];
            
            map.set(key, [...value, rep]);
        }
    }
    
    for(const [key, value] of map){
        let sum = 0;
        
        for(let i = 0; i < value.length; i++){
            sum += value[i];
        }
        
        answer.push(`${sum} ${key}`);
    }
    
    return answer;
};