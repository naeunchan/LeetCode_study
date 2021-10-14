const getPalindromeLength = (s, left, right) => {
    while(left >= 0 && right < s.length){
        if(s[left] !== s[right]){
            break;
        }
        
        left--;
        right++;
    }
    
    return right - (left + 1);
}

const longestPalindrome = (s) => {
    let start = 0;
    let end = 0;
    
    if(s.length === 1){
        return s;
    }
    
    for(let i = 0; i < s.length; i++){
        const len1 = getPalindromeLength(s, i, i);
        const len2 = getPalindromeLength(s, i, i + 1);
        
        if(end - start + 1 < len1){
            start = i - Math.floor(len1 / 2);
            end = i + Math.floor(len1 / 2);
        }
        
        if(end - start + 1 < len2){
            start = i + 1 - Math.floor(len2 / 2);
            end = i + Math.floor(len2 / 2);
        }
    }
    
    return s.substr(start, end - start + 1);
};