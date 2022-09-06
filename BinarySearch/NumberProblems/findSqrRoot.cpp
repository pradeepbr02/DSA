class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long int start=1;
        long long int end=x;
        long long int ans;
        
        while(start <= end){
            long long int mid = (start + end)/2;
            long long int rootOf = mid*mid;
            if(rootOf == x){
                return mid;
            }
            else if(rootOf > x){
                end = mid-1;
            }
            else{
                start = mid+1;
                ans = mid;
            }
        }
        return ans;
    }
};