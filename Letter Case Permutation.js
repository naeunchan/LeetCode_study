const letterCasePermutation = (s) => {
    const answer = [];
    
    const dfs = (s, i) => {
        if(i === s.length){
            answer.push(s);
            
            return;
        }
        
        dfs(s, i + 1);
        
        if(s[i] >= "a" && s[i] <= "z"){
            const front = s.slice(0, i);
            const back = s.slice(i + 1);
            const upper = s[i].toUpperCase();
            
            dfs(front + upper + back, i + 1);
        } else if(s[i] >= "A" && s[i] <= "Z"){
            const front = s.slice(0, i);
            const back = s.slice(i + 1);
            const lower = s[i].toLowerCase();
            
            dfs(front + lower + back, i + 1);
        }
    }
    
    dfs(s, 0);
    
    return answer;
};