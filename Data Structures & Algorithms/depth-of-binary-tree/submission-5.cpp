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
    int result=0;

    int maxDepth(TreeNode* root) {
        traversal(root, 0);

        return result;
    }

    void traversal(TreeNode *root, int level){
        if(!root){
            return;
        }

        level++;
        result=max(result, level);
        traversal(root->left, level);
        traversal(root->right, level);
    }
};
