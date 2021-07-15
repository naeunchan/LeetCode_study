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
    int minDepth(TreeNode* root) {
        queue<pair<TreeNode *, int>> q;
        int depth = 0;
        
        if(root != NULL){
            q.push(make_pair(root, 1));
            
            while(!q.empty()){
                int size = q.size();
                
                while(size--){
                    TreeNode * current = q.front().first;
                    int d = q.front().second;
                    
                    q.pop();
                    
                    if(current->left == NULL && current->right == NULL){
                        return d;
                    }
                    else{
                        if(current->left != NULL){
                            q.push(make_pair(current->left, d + 1));
                        }
                        
                        if(current->right != NULL){
                            q.push(make_pair(current->right, d + 1));
                        }
                    }
                }
            }
        }
        
        return depth;
    }
};