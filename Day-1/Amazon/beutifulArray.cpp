class Solution {
public:
    int minDeletion(vector<int>& nums) {
     
      int ans=0; 
        int n=nums.size();
        for(int i=0;i<n-1 ;i++)
        {
            if((i-ans)%2==0 && nums[i]==nums[i+1]){
                ans++;
            } 
            
        }
        if((n-ans)%2==1){
            ans++;
        }
        return ans;
    }
};
