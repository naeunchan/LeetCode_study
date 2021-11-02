const dfs = (n, left, right, string, answer) => {
    if(left > n || right > n){
        return;
    } else if(left === n && right === n){
        answer.add(string);
        return;
    }
    
    dfs(n, left + 1, right, string + "(", answer);
    dfs(n, left + 1, right, "(" + string, answer);
    
    if(right < left){
        dfs(n, left, right + 1, string + ")", answer);
    }
}

const generateParenthesis = (n) => {
    const answer = new Set();
    
    dfs(n, 1, 0, "(", answer);
    
    return [...answer];
};