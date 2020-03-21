/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
/*˫ָ�뷨*/ 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *p=head;
        ListNode *q=head;
        if(head==NULL||head->next==NULL){
            return NULL;
        }
        while(q!=NULL){
            p=p->next;
            if(q->next!=NULL){
                q=q->next->next;
            }
            else{
                q=NULL;
            }
            if(p==q&&p!=NULL){
                q=head;
                while(p!=q){
                    p=p->next;
                    q=q->next;
                }
                if(p==q){
                    return p;
                }
            }
        }
        return NULL;
    }
};

