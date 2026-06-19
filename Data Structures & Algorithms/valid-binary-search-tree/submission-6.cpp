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
    bool isValidBST(TreeNode* root) {
        return traversal(root, INT_MIN, INT_MAX);   
    }

    bool traversal(TreeNode *root, int left, int right){
        if(root==NULL){
            return true;
        }

        if(!(left<root->val && root->val<right)){
            return false;
        } else {
            return traversal(root->left, left, root->val) && traversal(root->right, root->val, right);
        }
    }
};
