class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = INT_MIN;
        int ans=0;
        for(int i=0;i<nums.size();i++){

            if(nums[i]==1){
                ans++;
            }
            else{
                maxi = max(ans , maxi);
                ans=0;
                
            }
        }
        maxi = max(ans , maxi);
       return maxi;
    }
};