/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> values;
        ListNode *node=head;
        
        while(node){
            values.push_back(node->val);
            node=node->next;
        }

        int n=values.size();
        for(int i=0;i<n/2;i++){
            if(values[i]!=values[n-1-i]){
                return false;
            }
        }

        return true;
    }
};