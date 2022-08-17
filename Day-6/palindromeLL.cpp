#include<bits/stdc++.h>
using namespace std;
class Solution {
      typedef struct node{
        int data;
        struct node *next;
    }ListNode;
public:
    bool isPalindrome(ListNode* head) {
       if(!head->next){
           return true;
       }
        ListNode*ptr=head;
        ListNode*preptr = head;
        while(ptr->next and ptr->next->next){
            preptr=preptr->next;
            ptr=ptr->next->next;
        }
        ListNode *temp,*curr_node=preptr->next,*prev=NULL;
        while(curr_node!=NULL){
            temp = curr_node->next;
            curr_node->next=prev;
            prev=curr_node;
            curr_node=temp;
        }
        preptr->next=prev;
        ListNode*start=head,*mid=preptr->next;
        while(mid){
            if(start->val != mid->val){
                return false;
            }
            start=start->next;
            mid=mid->next;
        }
        return true;
      
        
    }
};


