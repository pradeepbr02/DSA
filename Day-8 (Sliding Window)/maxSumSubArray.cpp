class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &Arr,int N){
        long  sum = 0 ;
        
        int i=0,j=0;
        
        long  maxi = 0;
        
        
        while(j<N){
            
            sum+=Arr[j];
            
            if(j-i+1 < k){
                
                j++;
            }
            else if(j-i+1==k){
                
                maxi = max(maxi , sum);
                
                sum=sum-Arr[i];
                
                i++;
                
                j++;
                
            }
        }
        return maxi;
    }
};