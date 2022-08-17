#include<bits/stdc++.h>
using namespace std;
class Solution {
    typedef struct node{
        int data;
        struct node *next;
    }ListNode;
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL or head->next==NULL){
            return false;
        }
        ListNode*ptr=head;
        ListNode*preptr=head;
        
        while(ptr->next && ptr->next->next){
            ptr=ptr->next->next;
            preptr=preptr->next;
            
            if(preptr==ptr){
                return true;
            }
        }
        return false;
    }
};