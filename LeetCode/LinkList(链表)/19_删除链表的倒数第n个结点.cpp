/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
/*常规解法*/ 
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

/*双指针法*/
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
