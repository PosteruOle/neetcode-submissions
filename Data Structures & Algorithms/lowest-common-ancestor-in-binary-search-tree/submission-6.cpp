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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root && !p && !q){
            return NULL;
        }

        TreeNode *node=root;
        while(node){
            if(max(p->val, q->val)<node->val){
                node=node->left;
            } else if(min(p->val, q->val)>node->val){
                node=node->right;
            } else {
                return node;
            }
        }

        return NULL;
    }
};
