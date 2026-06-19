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
    vector<int> values;

    void traversal(TreeNode * root, int k){
        if(!root){
            return;
        }

        traversal(root->left, k);

        values.push_back(root->val);
        
        traversal(root->right, k);
    }

    int kthSmallest(TreeNode* root, int k) {
        traversal(root, k);

        for(int value: values){
            cout << value << " ";
        }

        return values[k-1];
    }
};
