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
    void traversal(TreeNode *root, int currentMax){
        if(root==NULL){
            return;
        }

        if(root->val>=currentMax){
            result++;
        }

        currentMax=max(currentMax, root->val);
        
        traversal(root->left, currentMax);
        traversal(root->right, currentMax);
    }
    int goodNodes(TreeNode* root) {
        traversal(root, INT_MIN);
        return result;
    }
};
