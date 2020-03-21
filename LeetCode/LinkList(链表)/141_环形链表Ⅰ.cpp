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
    bool hasCycle(ListNode *head) {
        bool check=false;
        ListNode *p=head;
        ListNode *q=head;
        if(head==NULL||head->next==NULL){
            return check;
        }
        while(q!=NULL){
            p=p->next;
            if(q->next!=NULL){
                q=q->next->next;
            }
            else if(q->next==NULL){
                q=NULL;
            }
            if(p==q){
                check=true;
                break;
            }
        }
        return check;
    }
};

