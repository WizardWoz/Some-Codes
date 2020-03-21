/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
/*����ⷨ*/ 
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
        //��ΪdummyΪʹ��new�½���ָ�룬ʹ����ջ�ڴ棬��Ҫ����
        q=dummy->next;
        delete dummy;
        return q;
    }
};

/*˫ָ�뷨*/
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;

        ListNode* p = dummyHead;
        ListNode* q = dummyHead;
        for( int i = 0 ; i < n + 1 ; i ++ ){
            q = q->next;
        }

        while(q){
            p = p->next;
            q = q->next;
        }

        ListNode* delNode = p->next;
        p->next = delNode->next;
        delete delNode;

        ListNode* retNode = dummyHead->next;
        delete dummyHead;

        return retNode;
        
    }
}; 
