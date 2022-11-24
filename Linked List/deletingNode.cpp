#include<bits/stdc++.h>
using namespace std;
class Solution {
    typedef struct node{
        int val;
        struct node *next;
    }ListNode;
public:

    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
        
    }
};

//soln2

class Solution {
    typedef struct node{
        int val;
        struct node *next;
    }ListNode;
public:

    void deleteNode(ListNode* node) {
            ListNode *temp=node->next;
            node->val=temp->val;
            node->next=temp->next;
            delete temp;

        
    }
};

