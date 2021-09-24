/**
 * @param {number[]} nums
 * @return {number[][]}
 */
const permute = (nums) => {
    const answer = [];
    
    const dfs = (nums, acc) => {
        if(!nums.length){
            answer.push(acc);
            return;
        }
        
        nums.forEach((n, index) => {
            const copy = nums.slice();
            copy.splice(index, 1);
            dfs(copy, acc.concat(n));
        });
    }
    
    dfs(nums, []);
    
    return answer;
};