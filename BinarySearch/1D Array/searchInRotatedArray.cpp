class Solution {
public:
    bool InfindRange(int a , int b ,int target){
        return target>=a && target<=b;
    }
    
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        
        while(start <= end){
            int mid = start + (end-start)/2;
            
            if(nums[mid]==target){
                return mid;
            }
            if(nums[end]==nums[mid] && nums[start]==nums[mid]){ //condition to eliminate duplicates
                start++;
                end--;
            }
             else if(nums[mid] < nums[end]){
                if(InfindRange(nums[mid] , nums[end] , target)){ //to check right sorted array
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            else{
                if(InfindRange(nums[start] , nums[mid] , target)){  //check left sorted array
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
        }
        
        return -1;
    }
};