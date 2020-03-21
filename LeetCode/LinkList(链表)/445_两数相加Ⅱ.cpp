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
        int stack1[10000],stack2[10000];
        int top1=-1,top2=-1;
        int check=0;    //进位标识符
        int value=0;    //每一位数字相加的和
        ListNode *dummy=new ListNode(-1);
        ListNode *p=NULL;
        ListNode *head=p;
        while(l1!=NULL){
            stack1[++top1]=l1->val;
            l1=l1->next;
        }
        while(l2!=NULL){
            stack2[++top2]=l2->val;
            l2=l2->next;
        }
        while(top1!=-1&&top2!=-1){
            value=stack1[top1--]+stack2[top2--];
            if(check==1){
                value+=1;
                check=0;
            }
            if(value>=10){
                check=1;
                value-=10;
            }
            p=new ListNode(value);
            p->next=head;
            dummy->next=p;
            head=p;
        }
        if(top1==-1||top2==-1){
            if(top1==-1){
                while(top2!=-1){
                    value=stack2[top2--];
                    if(check==1){
                        value+=1;
                        check=0;
                    }
                    if(value>=10){
                        check=1;
                        value-=10;
                    }
                    p=new ListNode(value);
                    p->next=head;
                    dummy->next=p;
                    head=p;
                }
            }
            else if(top2==-1){
                while(top1!=-1){
                    value=stack1[top1--];
                    if(check==1){
                        value+=1;
                        check=0;
                    }
                    if(value>=10){
                        check=1;
                        value-=10;
                    }
                    p=new ListNode(value);
                    p->next=head;
                    dummy->next=p;
                    head=p;
                }
            }
        }
        if(check==1){
            p=new ListNode(1);
            p->next=head;
            dummy->next=p;
            head=p;
        }
        p=dummy->next;
        delete dummy;
        return p;
    }
};

