class Solution{
public:	
	int findKRotation(int a[], int n) {
	    // code here
	    int i;
	    for( i=n-1 ; i>0;i--){
	        if(a[i-1] > a[i]){
	            return i%n;
	        }
	    }
	    return 0;
	}

};