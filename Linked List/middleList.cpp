#include<bits/stdc++.h>
using namespace std;
class Solution {
    typedef struct node{
        int data;
        struct node *next;
    }ListNode;
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *preptr=head;
        ListNode *ptr=head;
        if(head==NULL)
            return head;
        while(ptr!=NULL && ptr->next!=NULL){
            preptr=preptr->next;
            ptr=ptr->next->next;
        }
        return preptr;
    }
};