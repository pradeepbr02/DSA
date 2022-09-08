class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        // using Binary search -> TC - O(logN), SC - O(1)
        
        int low = 0;
        int high = arr.size();
        
        while(low < high){
            int mid = low + (high-low)/2;
            
            // (arr[mid] - (mid+1)) this shows no.of missing numbers till arr[mid] 
            if(arr[mid] - (mid+1) < k){
                // if no.of missing numbers till arr[mid] is less than k 
                // then move to right half
                low = mid + 1;
            }
            else{
                // if no.of missing numbers till arr[mid] is more than k 
                // then move to left half
                high = mid;
            }
        }
        return low+k; // this gives kth missing number
	}
};