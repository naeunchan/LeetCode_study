/**
 * @param {number[]} height
 * @return {number}
 */
const maxArea = function(height) {
    let front = 0;
    let back = height.length - 1;
    let answer = 0;
    
    while(front < back){
        let width = 0;
        
        if(height[front] < height[back]){
            width = height[front] * (back - front);
            front++;
        } else{
            width = height[back] * (back - front);
            back--;
        }
        
        answer = answer < width ? width : answer;
    }
    
    return answer;
};