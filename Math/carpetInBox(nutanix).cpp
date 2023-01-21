class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        //code here
     int count1 =0 , count2=0;
     int A1 =A, B1 =B;
     
     while(A > C){
         A=A/2;
         count1++;
     }
     
     while(B >D){
         B=B/2;
         count1++;
     }
     A = A1 , B=B1;
     while(B > C){
         B=B/2;
         count2++;
     }
     
     while(B > C){
         B=B/2;
         count2++;
     }
     
     while(A >D){
         A=A/2;
         count2++;
     }
     
     int res = min(count1 ,count2);
     
     return res;
    }
};