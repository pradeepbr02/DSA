#include<bits/stdc++.h>
using namespace std;
class Solution {
    typedef struct node{
        int val;
        struct node *next;
    }ListNode;
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* start = new ListNode();
        start->next=head;
        ListNode*ptr = start;
        ListNode*preptr = start;
        for(int i=0;i<=n;i++){
            ptr=ptr->next;
        }
        while(ptr!=NULL){
            preptr=preptr->next;
            ptr=ptr->next;
        }
        preptr->next=preptr->next->next;
        return start->next;
  
    }
};