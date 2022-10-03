/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *ptr=head;
        ListNode *preptr=head;
        int len=0;
        
       
        while(ptr!=NULL){
            preptr=ptr;
            ptr=ptr->next;
            len++;
        }
         len-=n;
        ptr=head;
        while(len--){
            preptr=ptr;
            ptr=ptr->next;
           
        }
         if(preptr->next!=NULL and ptr->next!=NULL) preptr->next=ptr->next; // if the node to be deleted is in middle
        else if(preptr->next!=NULL and ptr->next==NULL) preptr->next=NULL; //if the node to be deleted is at the last
        else head=head->next;
        return head;
   
    }
};