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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        else{
            ListNode *p=head->next;
            ListNode *q=p->next;
            head->next=NULL;
            while(q!=NULL){
                p->next=head;
                head=p;
                p=q;
                q=q->next;
            }
            p->next=head;
            head=p;
            return head;
        }
    }
};

