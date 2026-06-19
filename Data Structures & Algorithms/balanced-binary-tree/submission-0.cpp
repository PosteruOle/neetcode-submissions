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
    bool flag=true;
    int traversal(TreeNode *root){
        if(root==NULL){
            return 0;
        }

        if(root->left==NULL && root->right==NULL){
            return 1;
        }

        int left=traversal(root->left);
        int right=traversal(root->right);

        if(abs(left-right)>1){
            flag=false;
            return left;
        }

        return max(left, right)+1;
    }
    bool isBalanced(TreeNode* root) {
        traversal(root);
        return flag;
    }
};
