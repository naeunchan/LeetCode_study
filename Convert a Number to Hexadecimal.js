/**
 * @param {number} num
 * @return {string}
 */
const toHex = (num) => {
    let answer = "";
    const string = ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "b", "c", "d", "e", "f"];
    
    if(num === 0){
        return "0";
    }
    
    if(num < 0){
        num = num + Math.pow(2, 32);
    }
    
    while(num){
        answer = string[Math.floor(num % 16)] + answer;
        num = Math.floor(num / 16);
    }
    
    return answer;
};