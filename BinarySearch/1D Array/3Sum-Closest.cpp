class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res=INT_MAX;
        int ans;
        sort(nums.begin() , nums.end());
        for(int i=0;i<nums.size();i++){
            int left=i+1 , right=nums.size()-1;
            while(left < right){
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==target){
                    return sum;
                }
                else if(abs(sum-target) < res){
                    res=abs(sum-target);
                    ans=sum;
                }
                if(sum < target){
                    left++;
                }
                else if(sum > target){
                    right--;
                }
}
        }
        return ans;
    }
};