/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    map<int, TreeNode *> parent;
    map<int, int> depth;
    map<int, bool> visited;
    
    void dfs(TreeNode * node, int dpt){
        visited[node->val] = true;
        depth[node->val] = dpt;
        
        if(node->left != NULL){
            parent[node->left->val] = node;
            dfs(node->left, dpt + 1);
        }
        
        if(node->right != NULL){
            parent[node->right->val] = node;
            dfs(node->right, dpt + 1);
        }
    }
    
    TreeNode * lca(TreeNode * p, TreeNode * q){
        while(depth[p->val] != depth[q->val]){
            if(depth[p->val] > depth[q->val]){
                p = parent[p->val];
            }
            else{
                q = parent[q->val];
            }
        }
        
        while(p->val != q->val){
            p = parent[p->val];
            q = parent[q->val];
        }
        
        return p;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode * answer;
        
        if(root != NULL){
            dfs(root, 0);
            answer = lca(p, q);
        }
        
        return answer;
    }
};