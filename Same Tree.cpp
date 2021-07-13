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
    void preorder(TreeNode * node, vector<int> &v){
        v.push_back(node->val);
        
        if(node->left != NULL){
            preorder(node->left, v);
        }
        else{
            v.push_back(INT_MAX);
        }
        
        if(node->right != NULL){
            preorder(node->right, v);
        }
        else{
            v.push_back(INT_MAX);
        }
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> a;
        vector<int> b;
        int aIndex = 0, bIndex = 0;
        bool answer = false;
        
        if(p != NULL){
            preorder(p, a);
        }
        
        if(q != NULL){
            preorder(q, b);
        }
        
        if(a.empty() && b.empty()){
            return true;
        }
        
        while(aIndex < a.size() && bIndex < b.size()){
            if(a[aIndex++] != b[bIndex++]){
                return false;
            }
            answer = true;
        }
        
        return answer;
    }
};