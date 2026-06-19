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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL){
            return l2;
        }

        if(l2==NULL){
            return l1;
        }

        int transfer=0;
        ListNode *tmp1=l1;
        ListNode *tmp2=l2;
        ListNode *previous=NULL;
        while(tmp1!=NULL && tmp2!=NULL){
            if(tmp1->val+tmp2->val+transfer>9){
                tmp1->val=(tmp1->val+tmp2->val+transfer)%10;
                transfer=1;
            } else {
                tmp1->val=tmp1->val+tmp2->val+transfer;
                transfer=0;
            }
            previous=tmp1;
            tmp1=tmp1->next;
            tmp2=tmp2->next;
        }
        
        
        while(tmp1!=NULL){
            if(tmp1->val+transfer>9){
                tmp1->val=(tmp1->val+transfer)%10;
                transfer=1;
            } else {
                tmp1->val=tmp1->val+transfer;
                transfer=0;
            }
            previous=tmp1;
            tmp1=tmp1->next;
        }
        if(tmp2!=NULL){
            previous->next=tmp2;
        }
        while(tmp2!=NULL){
            if(tmp2->val+transfer>9){
                tmp2->val=(tmp2->val+transfer)%10;
                transfer=1;
            } else {
                tmp2->val=tmp2->val+transfer;
                transfer=0;
            }
            previous=tmp2;
            tmp2=tmp2->next;
        }

        if(tmp1==NULL && tmp2==NULL && transfer){
            previous->next=new ListNode(1);
        }

        return l1;
    }
};
