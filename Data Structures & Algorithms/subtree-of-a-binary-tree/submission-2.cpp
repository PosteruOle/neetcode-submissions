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
    bool traversal(TreeNode *root, TreeNode *subRoot){
        if(!root && !subRoot){
            return true;
        }

        if(!root || !subRoot){
            return false;
        }

        if(root->val!=subRoot->val){
            return false;
        }

        return traversal(root->left, subRoot->left) && traversal(root->right, subRoot->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root && !subRoot){
            return true;
        }

        if(!root || !subRoot){
            return false;
        }

        bool flag;

        if(root->val==subRoot->val){
            flag=traversal(root, subRoot);
        }

        if(flag){
            return true;
        }
    
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
