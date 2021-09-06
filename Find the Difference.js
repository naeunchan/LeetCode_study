/**
 * @param {string} s
 * @param {string} t
 * @return {character}
 */
var findTheDifference = function(s, t) {
    const ss = s.split("");
    const ts = t.split("");
    
    ss.sort();
    ts.sort();
    
    for(let i = 0; i < ss.length; i++){
        if(ss[i] !== ts[i]){
            return ts[i];
        }
    }
    
    return ts[ts.length - 1];
};