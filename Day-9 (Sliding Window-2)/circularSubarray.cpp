class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int tot_sum = 0;
        int maxsubarray = INT_MIN;
        int minsubarray =INT_MAX;
        int pos_sum = 0;
        int neg_sum =0;

        for(auto it : nums){
            tot_sum+=it;
            pos_sum +=it;
            neg_sum+=it;

            maxsubarray = max(maxsubarray , pos_sum);

            if(pos_sum <0){
                pos_sum=0;
            }

            minsubarray = min(minsubarray , neg_sum);

            if(neg_sum >0){
                neg_sum=0;
            }
        }
        return (tot_sum==minsubarray)? maxsubarray : max(maxsubarray , tot_sum - minsubarray);
    }
};