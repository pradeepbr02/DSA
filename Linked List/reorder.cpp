//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Following is the Linked list node structure */

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{ 
public: 

Node * reverse(Node * head){
    Node *curr = head;
    Node * prev = NULL;
    Node * ptr = head;
    
    while(curr){
        curr=curr->next;
        ptr->next = prev;
        prev = ptr;
        ptr = curr;
    }
    
    return prev;
}
   Node *merge(Node *t1 , Node *t2){
        Node* cur1=t1;
        Node* cur2=t2;
        while(cur2)
        {
            Node* temp1 = cur1->next;
            Node* temp2 = cur2->next;
            cur1->next=cur2;
            cur2->next=temp1;
            cur1=temp1;
            cur2=temp2;
        }
        return t1;
   }
    void reorderList(Node* head) {
        // Your code here
         Node* slow=head,*fast=head;
        while(fast and fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        Node* t2=slow->next;
        slow->next=nullptr;
        t2=reverse(t2);
        head=merge(head,t2);
    }
};

//{ Driver Code Starts.



/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }
        
        Solution ob;
        
        ob.reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}

// } Driver Code Ends