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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        int i;
        ListNode *start=NULL;
        ListNode *tail=NULL;
        ListNode *p=head;
        ListNode *q=NULL;
        //当单链表仅有一个结点时
        if(head==NULL||head->next==NULL){
            return head;
        }
        //当单链表含两个或两个以上结点时
        else{
            //只交换一个结点
            if(m==n){
                return head;
            }
            //从第一个结点开始，交换的结点个数≥2
            if(m==1&&n>=2){
                i=1;
                tail=head;
                p=p->next;
                q=p->next;
                tail->next=NULL;
                while(i>=m&&i<=n-1){
                    p->next=head;
                    head=p;
                    p=q;
                    if(q!=NULL){
                        q=q->next;
                    }
                    i++;
                }
                tail->next=p;
            }
            //从第二个结点开始，交换的结点个数≥2
            if(m>=2&&n>=m+1){
                i=1;
                while(i!=m-1){
                    p=p->next;
                    i++;
                }
                if(i==m-1){
                    start=p;
                    p=start->next;
                    q=p->next;
                    i++;
                }
                while(i>=m&&i<=n-1){
                    p->next=q->next;
                    q->next=start->next;
                    start->next=q;
                    q=p->next;
                    i++;
                }
            }
            return head;
        }
    }
};

