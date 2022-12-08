class Solution {
public:

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin() , stalls.end());
        
        int low = 0 , high = stalls[n-1] , res=0;
        int gap;
        while(low <= high){
            gap = (low+high)/2;
            int left =0 , count=1;
            for(int i=1 ;(i<n and count<k) ;i++){
                if(stalls[i]-stalls[left] >= gap){
                    left=i;
                    count++;
                }
            }
            if(count>=k){
                res=gap;
                low=gap+1;
            }
            else{
                high=gap-1;
            }
        }
        
        return res;
    }
};