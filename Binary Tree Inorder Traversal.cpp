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
    void inorder(TreeNode * node, vector<int> &answer){
        if(node->left != NULL){
            inorder(node->left, answer);
        }
        
        answer.push_back(node->val);
        
        if(node->right != NULL){
            inorder(node->right, answer);
        }
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> answer;
        
        if(root != NULL){
            inorder(root, answer);  
        }
        
        return answer;
    }
};