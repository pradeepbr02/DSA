class Solution {
public:
    int findMin(vector<int>& nums) {
        int pivot=0;
        for(int i=nums.size()-1; i>0; i--){
            if(nums[i-1]>nums[i]){
                pivot=i;
                break;
            }
        }
        return nums[pivot];
    }
};