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
 * @return {number}
 */

const dfs = (node, depth) => {
    const left = node.left !== null ? dfs(node.left, depth + 1) : depth;
    const right = node.right !== null ? dfs(node.right, depth + 1) : depth;

    return Math.max(left, right);
}

const maxDepth = (root) => {
    let answer = 0;
    
    if(root !== null){
        answer = dfs(root, 1);
    }
    
    return answer;
};