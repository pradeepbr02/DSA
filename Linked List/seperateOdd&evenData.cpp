// struct Node
// {
//     int data;
//     struct Node* next;
    
//     Node(int x){
//         data = x;
//         next = NULL;
//     }
// };

class Solution{
public:
    Node* divide(int N, Node *head){
        Node *evenHead = NULL;
        Node *evenTail = NULL;
        Node *oddHead =NULL;
        Node *oddTail = NULL;
        
        Node *temp = head;
        
        while(temp){
            int ele = temp->data;
            
            if(ele % 2==0){
                Node *new_node = new Node(ele);
                if(evenHead==NULL){
                    evenHead = new_node;
                    evenTail = evenHead;
                }
                else{
                    evenTail->next=new_node;
                    evenTail=new_node;
                }
            }
            else{
                Node *new_node = new Node(ele);
                if(oddHead==NULL){
                    oddHead = new_node;
                    oddTail = oddHead;
                }
                else{
                    oddTail->next=new_node;
                    oddTail=new_node;
                    
                }
            }
            temp=temp->next;
        }
        if(evenHead==NULL){
            return oddHead;
        }
        evenTail->next=oddHead;
        return evenHead;
    }
};
        
//{ Driver Code Starts.



// } Driver Code Ends