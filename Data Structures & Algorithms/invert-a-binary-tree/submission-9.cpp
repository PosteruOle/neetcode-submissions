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
    TreeNode* invertTree(TreeNode* root) {
        // Implmenting BFS approach
        if(root==NULL){
            return NULL;
        }

        queue<TreeNode*> queue;
        queue.push(root);

        while(!queue.empty()){
            TreeNode *help=queue.front();
            queue.pop();

            swap(help->left, help->right);

            if(help->left){
                queue.push(help->left);
            }

            if(help->right){
                queue.push(help->right);
            }
        }

        return root;
    }
};
