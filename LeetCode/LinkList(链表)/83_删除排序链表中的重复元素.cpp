/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        else{
            ListNode *p=head;
            ListNode *q=p;
            while(q!=NULL){
                while(q->val==p->val){
                    p->next=q->next;
                    q=q->next;
                    if(q==NULL){
                        break;
                    }
                }
                p=q;
            }
            return head;
        }
    }
};
