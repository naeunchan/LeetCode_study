/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode * node, int current){
        int left = 0;
        int right = 0;
        
        if(node->left != NULL){
            left = dfs(node->left, current + 1);
        }
        
        if(node->right != NULL){
            right = dfs(node->right, current + 1);
        }
        
        current = max(current, max(left, right));
        
        return current;
    }
    
    int maxDepth(TreeNode* root) {
        int answer = 0;
        
        if(root != NULL){
            answer = dfs(root, 1);
        }
        
        return answer;
    }
};