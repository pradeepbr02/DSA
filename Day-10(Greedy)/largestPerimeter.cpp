class Solution{
    public:
    int largestPerimeter(vector<int>&nums){
        sort(nums.begin() , nums.end());
        int res = INT_MIN;
        for(int i=0;i<nums.size()-2;i++){
          
            if(nums[i] + nums[i+1] > nums[i+2]){
                res = max(res , nums[i]+nums[i+1]+nums[i+2]);
            }
        }
        return (res==INT_MIN)?0:res;
    }

};