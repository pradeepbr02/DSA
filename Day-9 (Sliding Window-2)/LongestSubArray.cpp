class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int j=0,i=0;
        int sum=0;
        int ans=INT_MIN;
        while(j<nums.size()){
            sum+=nums[j];
            if(sum < k){
                j++;
            }
            else if(sum==k){
               ans = max(ans , j-i+1)
                j++;
            }
            else if(sum > k){
                while(sum > k){
                    sum-=nums[i];
                    i++;
                }
                
               if ( sum==k){
                ans = max(ans , j-i+1);s

                    ans++;
                }
                j++;
            }
            
}
        return ans;
        
    }
};