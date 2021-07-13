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
    void preorderLeft(TreeNode * node, vector<int> &v){
        v.push_back(node->val);
        
        if(node->left != NULL){
            preorderLeft(node->left, v);
        }
        else{
            v.push_back(200);
        }
        
        if(node->right != NULL){
            preorderLeft(node->right, v);
        }
        else{
            v.push_back(200);
        }
    }
    
    void preorderRight(TreeNode * node, vector<int> &v){
        v.push_back(node->val);
        
        if(node->right != NULL){
            preorderRight(node->right, v);
        }
        else{
            v.push_back(200);
        }
        
        if(node->left != NULL){
            preorderRight(node->left, v);
        }
        else{
            v.push_back(200);
        }
    } 
    
    bool isSymmetric(TreeNode* root) {
        vector<int> left;
        vector<int> right;
        
        if(root != NULL){
            int aIndex = 0;
            int bIndex = 0;
            
            if(root-> left != NULL){
                preorderLeft(root->left, left);
            }
            
            if(root->right != NULL){
                preorderRight(root->right, right);
            }
            
            if(left.size() != right.size()){
                return false;
            }
            else{
                while(aIndex < left.size() && bIndex < right.size()){
                    if(left[aIndex++] != right[bIndex++]){
                        return false;
                    }
                }
            }
        }
        
        return true;
    }
};