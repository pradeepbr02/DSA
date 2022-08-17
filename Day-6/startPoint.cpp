#include<bits/stdc++.h>
using namespace std;
class Solution {
    typedef struct node{
        int data;
        struct node *next;
    }ListNode;
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return NULL;
}
        
        ListNode *ptr=head;
        ListNode *preptr=head;
        while(ptr->next and ptr->next->next){
            preptr=preptr->next;
            ptr=ptr->next->next;
            if(preptr==ptr){
                ListNode *temp = head;
                while(preptr!=temp){
                    temp=temp->next;
                    preptr=preptr->next;
}
                return preptr;
}
        }
        return NULL;
    }
};