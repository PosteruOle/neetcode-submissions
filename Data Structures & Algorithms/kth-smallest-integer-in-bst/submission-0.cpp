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
    vector<int> tree_elements;
    void traversal(TreeNode *root){
        if(root==NULL){
            return;
        }

        traversal(root->left);
        tree_elements.push_back(root->val);
        traversal(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        traversal(root);
        return tree_elements[k-1];
    }
};
