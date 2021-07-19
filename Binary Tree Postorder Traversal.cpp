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
    void postorder(TreeNode * node, vector<int> &answer){
        if(node->left != NULL){
            postorder(node->left, answer);
        }
        
        if(node->right != NULL){
            postorder(node->right, answer);
        }
        
        answer.push_back(node->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> answer;
        
        if(root != NULL){
            postorder(root, answer);
        }
        
        return answer;
    }
};