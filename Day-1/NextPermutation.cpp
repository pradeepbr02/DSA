#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i,j;
        int n=nums.size();
        for(i=n-2;i>=0;i--){ //find the breakout point
            if(nums[i] < nums[i+1]){
                break;
}
        }
        if(i < 0){  //if no breakout point return reversed vector
            reverse(nums.begin(), nums.end());
            
            
        }
        else{
            for(j=n-1;j>i;j--){   //if there is breakout point,find element greater than breakout element from end
                if(nums[i] < nums[j]){
                    break;
}
}
            swap(nums[i] , nums[j]); //swap breakout element and greater element found

            reverse(nums.begin()+i+1 , nums.end());  //reverse the elements from swapped ele +1 to end
}
        
    }
};