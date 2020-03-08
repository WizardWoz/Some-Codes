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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i=1;
        ListNode *dummy=new ListNode(-1);
        dummy->next=head;
        ListNode *p=dummy,*q=NULL;
        while(p!=NULL){
            q=p->next;
            while(i<=n){
                q=q->next;
                i++;
            }
            if(q==NULL){
                p->next=p->next->next;
                break;
            }
            i=1;
            p=p->next;
        }
        //因为dummy为使用new新建的指针，使用了栈内存，需要回收
        q=dummy->next;
        delete dummy;
        return q;
    }
};
