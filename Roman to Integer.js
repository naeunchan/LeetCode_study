/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    const map = new Map();
    const length = s.length;
    let answer = 0;
    
    map.set("I", 1);
    map.set("IV", 4);
    map.set("IX", 9);
    map.set("V", 5);
    map.set("X", 10);
    map.set("XL", 40);
    map.set("XC", 90);
    map.set("L", 50);
    map.set("C", 100);
    map.set("CD", 400);
    map.set("CM", 900);
    map.set("D", 500);
    map.set("M", 1000);
    
    for(let i = 0; i < s.length; i++){
        const s1 = map.get(s.slice(i, i + 1));
        const s2 = map.get(s.slice(i, i + 2));
        
        if(s2){
            answer += s2;
            i++;
        }
        else{
            answer += s1;
        }
    }
    
    return answer;
};