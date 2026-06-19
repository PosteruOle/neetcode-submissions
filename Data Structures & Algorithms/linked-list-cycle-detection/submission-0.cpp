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

 #include <unordered_set>

class Solution {
public:
    bool hasCycle(ListNode* head) {
        unordered_set<ListNode*> set;
        int index=0;
        ListNode *help=head;
        while(help!=NULL){
            if(set.find(help)!=set.end()){
                return true;
            }

            set.insert(help);
            help=help->next;
            index++;
        }

        return false;
    }
};
