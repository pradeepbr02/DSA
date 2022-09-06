class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start =1 , end= *max_element(nums.begin() , nums.end());
       
        while(start < end){
            int mid= (start + end)/2;
            int sum=0;
            for(auto it : nums){
                sum += it/mid + (it%mid!=0);
            }
            if(sum <= threshold){
                
                end=mid;
            }
            else{
                start=mid+1;
            }
        }
        return start;
    }
};