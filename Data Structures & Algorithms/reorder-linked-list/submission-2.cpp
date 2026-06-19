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
    ListNode *traversal(ListNode *head, int p){
        if(head==NULL || head->next==NULL){
            return head;
        }

        if(p%2){
            head->next=traversal(head->next, p+1);
            return head;
        } 

        ListNode *tmp=head;
        while(tmp->next->next!=NULL){
            tmp=tmp->next;
        }

        ListNode *lastNode=tmp->next;
        ListNode *nextNode=head;
        tmp->next=NULL;
        lastNode->next=traversal(head, p+1);

        return lastNode;
    }
    
    void reorderList(ListNode* head) {
        head=traversal(head, 1);  
    }
};
