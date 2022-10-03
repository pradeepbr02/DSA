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