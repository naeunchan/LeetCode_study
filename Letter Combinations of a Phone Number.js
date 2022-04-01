var letterCombinations = function(digits) {
    const answer = [];
    const strings = ["", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"];
    const length = digits.length;
    
    if(!digits.length){
        return [];
    }
    
    const dfs = (current, index, size) => {
        const digit = parseInt(digits[index]);
        
        if(size === length - 1){
            for(let i = 0; i < strings[digit].length; i++){
                answer.push(current + strings[digit][i]);
            }
            
            return;
        }
        
        for(let i = 0; i < strings[digit].length; i++){
            const string = current + strings[digit][i];
            
            dfs(string, index + 1, size + 1);
        }
    }
    
    dfs("", 0, 0);
    
    return answer;
};