class Solution{
    public:
     bool increasingTriplet(vector<int>& nums) {
        int first=INT_MAX;
        int second = INT_MAX;
        for(int i=0;i<nums.size();i++){

            if(nums[i] < first){
                first=nums[i];
            }

            if(nums[i] > first){
                second = min(second , nums[i]);
            }

            if(nums[i] > second){
                return true;
            }

        }
        return false;
     }

};