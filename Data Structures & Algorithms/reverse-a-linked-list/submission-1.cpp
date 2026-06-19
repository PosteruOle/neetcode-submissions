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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }

        ListNode* previous = NULL;
        ListNode* current = head;
        ListNode* next;
        while(current!=NULL){
            if(current->next!=NULL){
                next=current->next;

                current->next=previous;
                previous=current;
                current=next;
            } else {
                current->next=previous;
                break;
            }
        }

        return current;
    }
};
