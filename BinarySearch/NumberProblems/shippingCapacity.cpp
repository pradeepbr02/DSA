class Solution {
public:
    bool isPossible(vector<int>& weights , int mid , int days){
        int count=1 , pages=0;
        
        for(int i=0;i<weights.size();i++){
            if(pages + weights[i] <= mid){
                pages+=weights[i];
            }
            else{
                pages=weights[i];
                count++;
                if(count > days){
                    return false;
                }
            }
        }
      
        return count<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int start= *max_element(weights.begin() , weights.end());
        int end=0;
        for(auto it : weights){
           
            end+=it;
        }
        
        int ans=-1;
        while(start <= end){
            int mid = (start + end)/2;
            if(isPossible(weights , mid , days)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};