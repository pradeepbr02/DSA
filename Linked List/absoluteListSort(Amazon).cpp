//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/* The structure of the Linked list Node is as follows:
struct Node
{
    Node* next;
    int data;
}; */

/*Your method shouldn't print anything
 it should transform the passed linked list */
class Solution{
    
public:
Node * reverse(Node *head){
    Node *next_ptr = head;
    Node *curr_ptr = head;
    Node *prev_ptr = NULL;
    
    while(next_ptr!=NULL){
        next_ptr=next_ptr->next;
        curr_ptr->next = prev_ptr;
        prev_ptr = curr_ptr;
        curr_ptr = next_ptr;
    }
    head = prev_ptr;
    
    return head;
}
    Node* sortList(Node* head)
    {
        // Your Code Here
        Node *ptr = head;
        Node *positive =  new Node;
        Node *negative = new Node;
        Node *temp = positive;
        Node * temp2 = negative;
        while(ptr!=NULL){
            if(ptr->data > 0){
                temp->next = ptr;
                temp=temp->next;
            }
            else{
                temp2->next = ptr;
                temp2=temp2->next;
            }
            ptr=ptr->next;
        }
        temp2->next = NULL;
        temp->next =NULL;
        
        negative = reverse(negative->next);
        
        Node *ans = new Node;
        Node *res = ans;
        
        while(negative!=NULL){
            res->next = negative;
            res = res->next;
            negative=negative->next;
        }
        positive=positive->next;
        while(positive!=NULL){
            res->next = positive;
            res=res->next;
            positive=positive->next;
        }
        
        return ans->next;
    }
};




