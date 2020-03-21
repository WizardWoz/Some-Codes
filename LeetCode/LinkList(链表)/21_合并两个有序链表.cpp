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
        //考虑两个链表均为空的情况
        if(l1==NULL&&l2==NULL){
            return NULL;
        }
        //当l1为空时(第一个链表为空)
        if(l1==NULL){
            return l2;
        }
        //当l2为空时(第二个链表为空)
        else if(l2==NULL){
            return l1;
        }
        //下面为正常情况(新的有序链表采用尾插法建立)
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
        //当第一个链表被遍历完成
        if(l1==NULL){
            p->next=l2;
        }
        //当第二个链表被遍历完成
        else if(l2==NULL){
            p->next=l1;
        }
        //回收内存
        p=dummy->next;
        delete dummy;
        return p;
    }
};

//递归做法(Java版) 
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

