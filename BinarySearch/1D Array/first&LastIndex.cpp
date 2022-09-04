class Solution {
public:
    int firstIndex(vector<int>&nums , int target){
        int start = 0;
        int end = nums.size()-1;
        int ans=-1;
        while(start <= end){
            int mid = (start + end)/2;
            if(nums[mid]==target){
                ans=mid;
                    end=mid-1;
            }
            else if(target > nums[mid]){
                start=mid+1;
            }
            else if(target < nums[mid]){
                end = mid-1;
            }
        }
        return ans;
    }
    
    int lastIndex(vector<int>&nums , int target){
        int start=0;
        int end=nums.size()-1;
        int ans=-1;
        while(start <= end){
            int mid=(start + end)/2;
            if(nums[mid]==target){
                ans=mid;
                start=mid+1;
            }
               else if(target > nums[mid]){
                start=mid+1;
            }
            else if(target < nums[mid]){
                end = mid-1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        int a = firstIndex(nums , target);
        int b = lastIndex(nums , target);
        v.push_back(a);
        v.push_back(b);
        return v;
  
    }
};