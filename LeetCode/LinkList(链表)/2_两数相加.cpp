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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy1=new ListNode(-1);
        ListNode *tail=dummy1;
        int check=0;    //进位标识符
        if(l1==NULL&&l2==NULL){
            return NULL;
        }
        else if(l1==NULL&&l2!=NULL){
            return l2;
        }
        else if(l1!=NULL&&l2==NULL){
            return l1;
        }
        else{
            int value=0;
            ListNode *r=NULL;
            while(l1!=NULL&&l2!=NULL){
                if(check==1){
                    value=l1->val+l2->val+1;
                    check=0;
                }
                else{
                    value=l1->val+l2->val;
                }
                if(value>=10){
                    check=1;
                    value-=10;
                    r=new ListNode(value);
                }
                else{
                    r=new ListNode(value);
                }
                tail->next=r;
                tail=r;
                l1=l1->next;
                l2=l2->next;
                value=0;
            }
            if(l1!=NULL||l2!=NULL){
                ListNode *p=NULL;
                if(l1!=NULL){
                    p=l1;
                }
                else if(l2!=NULL){
                    p=l2;
                }
                while(p!=NULL){
                    r=new ListNode(-1);
                    if(check==1){
                        value=p->val+1;
                        check=0;
                    }
                    else{
                        value=p->val;
                    }
                    if(value>=10){
                        check=1;
                        value-=10;
                        r->val=value;
                    }
                    else{
                        r->val=value;
                    }
                    tail->next=r;
                    tail=r;
                    p=p->next;
                    value=0;
                }
            }
            //最后要检测进位标识符是否为1(处理类似5+5，99+1这些情况) 
            if(check==1){
                r=new ListNode(1);
                tail->next=r;
                tail=r;
            }
            tail=dummy1->next;
            delete dummy1;
            return tail;
        }
    }
};

