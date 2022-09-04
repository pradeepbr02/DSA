class Solution {
public:
    bool IsinRange(int a , int b , int target){
        return target>=a && target<=b;
    }
    bool search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        
        while(start <= end){
            int mid = (start + end)/2;
            if(nums[mid]==target){
                return true;
            }
             if((nums[start] == nums[mid]) && (nums[end] == nums[mid])){
                start++;
                end--;
            }
            else if(nums[mid] <= nums[end]){
                if(IsinRange(nums[mid] , nums[end] , target)){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            else{
                if(IsinRange(nums[start] , nums[mid] , target)){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
        }
        return false;
    }
};