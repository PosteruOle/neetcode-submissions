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

            if(flag){
                return true;
            }
        }

        flag=isSubtree(root->left, subRoot);

        if(flag){
            return true;
        }

        return isSubtree(root->right, subRoot);
    }

    bool traversal(TreeNode *node1, TreeNode *node2){
        if(!node1 && !node2){
            return true;
        }

        if(!node1 || !node2){
            return false;
        }

        if(node1->val!=node2->val){
            return false;
        }

        return traversal(node1->left, node2->left) && traversal(node1->right, node2->right);
    }
};
