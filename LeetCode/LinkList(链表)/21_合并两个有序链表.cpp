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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *dummy=new ListNode(-1);
        ListNode *p=NULL;
        //�������������Ϊ�յ����
        if(l1==NULL&&l2==NULL){
            return NULL;
        }
        //��l1Ϊ��ʱ(��һ������Ϊ��)
        if(l1==NULL){
            return l2;
        }
        //��l2Ϊ��ʱ(�ڶ�������Ϊ��)
        else if(l2==NULL){
            return l1;
        }
        //����Ϊ�������(�µ������������β�巨����)
        if(l1->val>l2->val){
            p=l2;
            l2=l2->next;
        }
        else{
            p=l1;
            l1=l1->next;
        }
        dummy->next=p;
        while(l1!=NULL&&l2!=NULL){
            if(l1->val>l2->val){
                p->next=l2;
                l2=l2->next;
            }
            else{
                p->next=l1;
                l1=l1->next;
            }
            p=p->next;
        }
        //����һ�������������
        if(l1==NULL){
            p->next=l2;
        }
        //���ڶ��������������
        else if(l2==NULL){
            p->next=l1;
        }
        //�����ڴ�
        p=dummy->next;
        delete dummy;
        return p;
    }
};

//�ݹ�����(Java��) 
class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        if(l1 == null) {
            return l2;
        }
        if(l2 == null) {
            return l1;
        }

        if(l1.val < l2.val) {
            l1.next = mergeTwoLists(l1.next, l2);
            return l1;
        } 
		else {
            l2.next = mergeTwoLists(l1, l2.next);
            return l2;
        }
    }
}

