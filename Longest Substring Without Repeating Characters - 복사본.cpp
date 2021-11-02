const lengthOfLongestSubstring = (s) => {
    let length = 0;
    
    for(let i = 0; i < s.length; i++){
        const substrings = new Map();
        let string = "";
        
        for(let j = i; j < s.length; j++){
            if(!substrings.get(s[j])){
                substrings.set(s[j], true);
                string += s[j];
            } else{
                break;
            }
        }
        
        length = length < string.length ? string.length : length;
    }
    
    return length;
};