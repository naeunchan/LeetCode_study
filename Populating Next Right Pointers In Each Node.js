/**
 * // Definition for a Node.
 * function Node(val, left, right, next) {
 *    this.val = val === undefined ? null : val;
 *    this.left = left === undefined ? null : left;
 *    this.right = right === undefined ? null : right;
 *    this.next = next === undefined ? null : next;
 * };
 */

/**
 * @param {Node} root
 * @return {Node}
 */
const connect = (root) => {
    const answer = root;
    const pointer = root;
    const queue = [];
    const stack = [];
    let count = 1;
    
    if(!root){
        return root;
    }
    
    queue.push([pointer, 0]);
    
    while(queue.length){
        let [current, depth] = queue.shift();
        const left = current.left;
        const right = current.right;
        
        if(left){
            queue.push([left, depth + 1]);
        }
        
        if(right){
            queue.push([right, depth + 1]);    
        }
        
        if(count === Math.pow(2, depth)){
            current.next = null;
            
            while(stack.length){
                const node = stack.pop();
                
                node.next = current;
                current = node;
            }
            
            count = 0;
        } else{
            stack.push(current);
        }
        
        count++;
    }
    
    return answer;
};