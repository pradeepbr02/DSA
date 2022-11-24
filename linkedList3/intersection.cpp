#include<bits/stdc++.h>
using namespace std;
class Solution {
    typedef struct node{
        int data;
        struct node *next;
    }ListNode;
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int countA=0 ,countB=0;
        int count=0;
        ListNode*temp1=headA;
        ListNode*temp2=headB;
        while(temp1!=NULL){
            countA++;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            countB++;
            temp2=temp2->next;
        }
        count=abs(countA-countB);
        ListNode* ptrA=headA;
        ListNode* ptrB=headB;
        if(countA > countB){
            for(int i=0;i<count;i++){
                ptrA=ptrA->next;
            }
        }
        else{
            for(int i=0;i<count ;i++){
                ptrB=ptrB->next;
            }
        }
        while(ptrA!=NULL && ptrB !=NULL){
            if(ptrA==ptrB){
                return ptrB;
            }
            ptrA=ptrA->next;
            ptrB=ptrB->next;
}
        return NULL;
    }
};
