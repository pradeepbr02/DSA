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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *ptr=head;
       
        if(!head){
            return head;
        }
        ListNode *dummy = new ListNode(0);
        ListNode *head2=dummy;
        while(ptr!=NULL){
            
            if(ptr->val!=val){
                dummy->next=ptr;
                    dummy=ptr;
            
            }
          
            ptr=ptr->next;
        }
       dummy->next=NULL;
        return head2->next;
        
    }
};