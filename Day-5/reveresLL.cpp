#include<bits/stdc++.h>
using namespace std;
class Solution {
    typedef struct node{
        int data;
        struct node *next;
    }ListNode;
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode *next_node=head;
        ListNode *curr_node=head;
        ListNode *prev_node=NULL;
        while(next_node!=NULL){
            next_node=next_node->next;
            curr_node->next=prev_node;
            prev_node=curr_node;
            curr_node=next_node;
        }
        head=prev_node;

        return head;

    }
};