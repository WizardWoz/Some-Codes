/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 /*尾插法，在原链表中遍历，遇到出现多次的元素不断往后，遇到只出现一次的元素就插入到新链表中*/
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p=head;
        ListNode *dummy=new ListNode(-1);
        ListNode *tail=dummy;
        int value=0;
        if(head==NULL){
            return NULL;
        }
        while(p->next!=NULL){
            if(p->next->val==p->val){
                value=p->val;
                while(p->next!=NULL&&p->val==value){
                    p=p->next;
                }
            }
            else if(p->next->val!=p->val){
                //申请新结点，并将其连接到新链上
                ListNode *q=new ListNode(-1);
                q->val=p->val;
                tail->next=q;
                tail=tail->next;
                p=p->next;
            }
        }
        if(p->val!=value){
            tail->next=p;
            tail=tail->next;
        }
        tail->next=NULL;
        p=dummy->next;
        delete dummy;
        return p;
    }
};

