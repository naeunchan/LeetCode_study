/**
 * @param {number} n
 * @return {string}
 */
const countAndSay = (n) => {
    let answer = "1";
    
    for(let i = 2; i <= n; i++){
        let count = 1;
        let before = answer[0];
        let string = "";
        
        for(let j = 1; j < answer.length; j++){
            if(answer[j] === before){
                count++;
            } else{
                string += `${count}${before}`;
                count = 1;
                before = answer[j];
            }
        }
        
        answer = `${string}${count}${before}`;
    }
    
    return answer;
};