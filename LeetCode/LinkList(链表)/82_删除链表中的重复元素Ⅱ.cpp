/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 /*β�巨����ԭ�����б������������ֶ�ε�Ԫ�ز�����������ֻ����һ�ε�Ԫ�ؾͲ��뵽��������*/
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
                //�����½�㣬���������ӵ�������
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

