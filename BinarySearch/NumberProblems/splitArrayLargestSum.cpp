class Solution {
public:
    bool isPossible(vector<int> &nums , int mid , int m){
        int count=1 , sum=0;
        for(auto it : nums){
            if(sum + it <= mid){
                sum+=it;
            }
            else{
                count++;
                sum=it;
                if(count > m){
                    return false;
                }
            }
        }
        return count<=m;
    }
    int splitArray(vector<int>& nums, int m) {
        int start=0;
        int end=0;
        int ans=-1;
        for(auto it : nums){
            end+=it;
            start=max(start , it);
        }
        while(start <= end){
            int mid = (start + end)/2;
            if(isPossible(nums , mid , m)){
                ans = mid;
                end = mid-1;
            }
            else{
                start=mid+1;
            }
        }
        
        return ans;
    }
};