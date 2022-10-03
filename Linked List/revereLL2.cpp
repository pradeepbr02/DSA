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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        vector<int>v;
        int i=0;
        ListNode *ptr= head;
        while(ptr){
           v.push_back(ptr->val);
            ptr=ptr->next;
        }
        
        reverse(v.begin()+left-1 , v.begin()+right);
        
       ListNode *temp=head;
        while(temp){
            temp->val=v[i];
            i++;
            temp=temp->next;
        }
        
        return head;

 
    }
};