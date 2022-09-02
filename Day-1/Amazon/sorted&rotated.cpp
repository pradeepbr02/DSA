// approach : if the array is rotated (not zero) then we will have 2 sorted halfes
// so there will only be one point when a[j-1]>a[j]
// and if rotated by 0 we dont have any point like that

class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        int j=1;
        while(j < nums.size()){
            if(nums[j-1] > nums[j]){
                count++;
            }
          
            j++;
        }
        if((count==1 && nums[0] >= nums[nums.size()-1]) || count==0){
            return true;
}

// if x>1 false and if x==0 means array is sorted so true
        // now for this (x == 1 && a[0]>=a[n-1])  part, if the array is rotated then the last no. of array has to be smaller than the first no.
        // this take care of [2,1,3,4] this type of situations where x might be 1 but array is not sorted
        

      return false;  
    }
};

