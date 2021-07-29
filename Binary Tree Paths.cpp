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
    vector<string> answer;
    
    void dfs(TreeNode * node, string current){
        string s = to_string(node->val);
        
        if(node->left == NULL && node->right == NULL){
            answer.push_back(current + s);
            return;
        }
        
        if(node->left != NULL){
            dfs(node->left, current + s + "->");
        }
        
        if(node->right != NULL){
            dfs(node->right, current + s + "->");
        }
        
        return;
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root != NULL){
            dfs(root, "");
        }
        
        return answer;
    }
};