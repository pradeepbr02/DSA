class Solution 
{
    public:
    bool isPossible(int A[] , int mid , int N , int M){
        int sum=0;
        int count=1;
        for(int i=0 ; i<N ;i++){
            if(sum + A[i] <= mid){
                sum+=A[i];
            }
            else{
                count++;
                sum=A[i];
                
                if(count > M){
                    return false;
                }
            }
        }
        return count<=M;
    }
    int findPages(int A[], int N, int M) 
    {
        if(N < M){
            return -1;
        }
        int start=0;
        int end=0;
        int ans=-1;
        for(int i=0;i<N;i++){
            end+=A[i];
            start = max(start , A[i]);
        }
        while(start <= end){
            int mid = (start+end)/2;
            if(isPossible(A , mid , N , M)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};