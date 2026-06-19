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
    ListNode* removeNthFromEnd(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }

        ListNode *tmp=head;
        int n=0;
        while(tmp!=NULL){
            n++;
            tmp=tmp->next;
        }

        int stop=n-k;
        if(stop==0){
            return head->next;
        }
        
        tmp=head;
        while(stop!=1){
            tmp=tmp->next;
            stop--;
        }
        
        tmp->next=tmp->next->next;

        return head;
    }
};
