class Solution{
  public:
    int maxDistance(int arr[], int n) 
    { 
        // Complete the function
        
        
        //In this problem just solve for the equation   | arr[ i ] - arr[ j ] | + | i - j |
        
        //also be careful that i<=j  so when you solve for i-j its always j-i
        
        int maxi1 = INT_MIN, maxi2 = INT_MIN, mini1 =INT_MAX , mini2 = INT_MAX;
        
        for(int i=0;i<n;i++){
            maxi1 = max(maxi1, arr[i]+i);
            mini1 = min(mini1 , arr[i]+i);
            
            maxi2 = max(maxi2 ,arr[i]-i);
            mini2 = min(mini2 , arr[i]-i);
            
            
        }
        return max((maxi1-mini1) , (maxi2 - mini2));
    } 
};