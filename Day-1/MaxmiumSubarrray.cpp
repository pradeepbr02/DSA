#include<bits/stdc++.h>
using namespace std;                                        //using KADANE'S ALGO
                                        //here we have to find a subarray sum that is maximum compared to all

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;                                            //set SUM->0
        int maximum=INT_MIN;                                  //loop through 
        for(int i=0;i<nums.size();i++){                       //calc sum , find max , if sum < 0, set it to 0 
            sum+=nums[i];                                     //repeat the process    
            maximum=max(maximum , sum);
            if(sum < 0){
                sum=0;
}
        }

        return maximum;
    }
};