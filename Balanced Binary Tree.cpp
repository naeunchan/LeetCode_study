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
    int getHeight(TreeNode * node){
        if(node == NULL){
            return 0;
        }
        
        return 1 + max(getHeight(node->left), getHeight(node->right));
    }
    
    bool dfs(TreeNode * node){
        int left = 0;
        int right = 0;
        
        if(node == NULL){
            return true;
        }
        
        left = getHeight(node->left);
        right = getHeight(node->right);
        
        if(abs(left - right) <= 1 && dfs(node->left) && dfs(node->right)){
            return true;
        }
        
        return false;
    }
    
    bool isBalanced(TreeNode* root) {
        if(root != NULL){
            if(!dfs(root)){
                return false;
            }
        }
        
        return true;
    }
};