#include<bits/stdc++.h>
using namespace std;
class Solution {
    typedef struct node{
        int val;
        struct node *next;
}ListNode;
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *start = new ListNode();
        ListNode *temp = start;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            int sum=0;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
}
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            ListNode*node = new ListNode(sum%10);
            temp->next=node;
            temp=temp->next;
            carry=sum/10;
        }
        return start->next;
   
    }
};