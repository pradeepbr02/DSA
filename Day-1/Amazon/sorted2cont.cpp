class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0 , j=1;
        int count=1;
        while(j < nums.size()){
            if(nums[i]==nums[j]){
                if(count < 2){
                    count++;
                    i++;
                    nums[i]=nums[j];
                    j++;
}
                else{
                    j++;
                }
}
            else{
                count=1;
                i++;
                nums[i]=nums[j];
                j++;
}
        }
        return i+1;
        
    }
};