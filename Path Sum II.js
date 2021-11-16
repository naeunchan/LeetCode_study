/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} targetSum
 * @return {number[][]}
 */

const dfs = (node, sumArray, sum, answer, targetSum) => {
    if(sum === targetSum && node.left === null && node.right === null){
        answer.push(sumArray);
        return;
    }
    
    if(node.left !== null){
        dfs(node.left, [...sumArray, node.left.val], sum + node.left.val, answer, targetSum);
    }
    
    if(node.right !== null){
        dfs(node.right, [...sumArray, node.right.val], sum + node.right.val, answer, targetSum);
    }
};

const pathSum = (root, targetSum) => {
    const answer = [];
    
    if(root !== null){
        dfs(root, [root.val], root.val, answer, targetSum);
    }
    
    return answer;
};