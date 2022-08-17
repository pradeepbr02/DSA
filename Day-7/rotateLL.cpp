class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head or !head->next){
            return head;
}
        ListNode *curr_node=head;
        int len=1;
        while(curr_node->next){
            curr_node=curr_node->next;
            len++;
        }
        curr_node->next=head;
        k=k%len;
        k=len - k;
        while(k--){
            curr_node=curr_node->next;
        }
        head=curr_node->next;
        curr_node->next=NULL;
        return head;
        
    }
};