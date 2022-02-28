const diStringMatch = (s) => {
    const answer = [];
    let front = 0;
    let back = s.length;
    
    for(let i = 0; i < s.length; i++){
        if(s[i] === "I"){
            answer.push(front++);
        } else{
            answer.push(back--);
        }
    }
    
    answer.push(front <= back ? front : back);
    
    return answer;
};