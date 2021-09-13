/**
 * @param {string} s
 * @return {boolean}
 */
const checkPalindrome = (front, back, s) => {
    while(front <= back){
        if(s[front++] !== s[back--]){
            return false;
        }
    }
    
    return true;
}

const validPalindrome = (s) => {
    let front = 0;
    let back = s.length - 1;
    
    while(front <= back){
        if(s[front] !== s[back]){
            return checkPalindrome(front + 1, back, s) || checkPalindrome(front, back - 1, s);
        }
        
        front++;
        back--;
    }
    
    return true;
};