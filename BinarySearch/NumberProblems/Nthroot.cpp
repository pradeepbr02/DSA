class Solution{
	public:
	int NthRoot(int n, int m)
{
    int start=1;
    int end = m;
    while(start <= end){
        
        int mid = (start+end)/2;
        
        double val = pow(mid , n);
        
        if(val==m){
            return mid;
        }
        else if(val > m){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        
       
        
    }
    return -1;
}
	    
	 
};