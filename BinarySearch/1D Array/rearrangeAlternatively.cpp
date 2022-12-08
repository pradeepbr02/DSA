class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
        vector<long long>v;
        long long i=0;
        long long j=n-1;
        
        
        
        for(int k=0;k<n;k++){
            if(k % 2==0){
                v.push_back(arr[j--]);
            }
            else{
                v.push_back(arr[i++]);
            }
        }
        
        for(long long k=0;k<n;k++){
            arr[k]=v[k];
        }
        
    	
    	// Your code here
    	 
    }
};