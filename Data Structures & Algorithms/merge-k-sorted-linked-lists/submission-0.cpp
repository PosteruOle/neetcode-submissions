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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> values;
        ListNode *current;

        for(ListNode *node: lists){
            current=node;

            while(current!=NULL){
                values.push_back(current->val);
                current=current->next;
            }
        }

        sort(values.begin(), values.end());

        ListNode *result=new ListNode(-1);
        current=result;

        for(int value: values){
            current->next=new ListNode(value);
            current=current->next;
        }

        return result->next;
    }
};