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
    void preorder(TreeNode * node, vector<int> &answer){
        answer.push_back(node->val);
        
        if(node->left != NULL){
            preorder(node->left, answer);
        }
        
        
        if(node->right != NULL){
            preorder(node->right, answer);
        }
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> answer;
        
        if(root != NULL){
            preorder(root, answer);
        }
        
        return answer;
    }
};