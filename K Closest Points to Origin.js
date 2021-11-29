/**
 * @param {number[][]} points
 * @param {number} k
 * @return {number[][]}
 */
const kClosest = (points, k) => {
    const array = [];
    const answer = [];
    
    for(let i = 0; i < points.length; i++){
        array.push([Math.sqrt(points[i][0] ** 2 + points[i][1] ** 2), i]);
    }
    
    array.sort((a, b) => a[0] - b[0]);
    
    for(let i = 0; i < k; i++){
        answer.push(points[array[i][1]]);
    }
    
    return answer;
};