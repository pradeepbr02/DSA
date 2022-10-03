int countNodesinLoop(struct Node *head)
{
    Node *fast = head;
    Node *slow = head;
    int len=1;
    bool f=false;
    while(fast and fast->next and fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
        
        if(slow==fast){
           f=true;
           break;
        }
    }
    if(f){
        slow=slow->next;
        while(slow!=fast){
            slow=slow->next;
            len++;
        }
        return len;
    }
    return 0;
    
}