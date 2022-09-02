class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        vector<int>v(n);
        int k=0,j=0;
        for(int i=0 ;i<n;i++){
            if(i%2==0){
                while(k < n && nums[k] < 0 ){
                    k++;
                }
                v[i]=nums[k++];
            }
                
            else{
                while(j<n && nums[j] >0){
                    j++;
                }
                v[i]=nums[j++];
            }

        }
        return v;
    }
};

