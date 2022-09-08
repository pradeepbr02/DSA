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
    ListNode* rotateRight(ListNode* head, int k) {
        //edge cases first
        if(head==NULL || head->next==NULL || k==0)
            return head;
        
        //a pointer to iterate over the LL
        ListNode* curr = head;
        //len to store length of the linked list
        int len = 1;
        
        //loop to get length of the linked list
        while(curr->next!=NULL && ++len)
            curr = curr->next;
    
        //now after above loop our curr was pointing to the last node
        //so we are making its next to point head
        curr->next = head;
        //if k is greater than len then reducing it to less than len
        k = k%len;
        //then getting len - k node to point it too null and making its next to the new head
        k = len-k;
        while(k--)
            curr=curr->next;
            
        //here we are making the new head and making the curr next to NULL
        head = curr->next;
        curr->next = NULL;
        
        //and in the head returning the head
        return head;
    }
};