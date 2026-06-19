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
    bool hasCycle(ListNode* head) {
        unordered_set<ListNode*> set;
        ListNode *help=head;

        while(help){
            if(set.find(help)!=set.end()){
                return true;
            } else {
                set.insert(help);
                help=help->next;
            }
        }

        return false;  
    }
};
