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

    void traversal(TreeNode *root, int max){
        if(!root){
            return;
        }

        if(root->val>=max){
            result++;
            max=root->val;
        }

        traversal(root->left, max);
        traversal(root->right, max);
    }

    int goodNodes(TreeNode* root) {
        traversal(root, -101);

        return result;    
    }
};
