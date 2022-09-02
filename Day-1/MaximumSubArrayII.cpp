class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int j=0;
        int i=nums.size()-1;
        int maxProd = INT_MIN;
        int prod=1;
        while(j < nums.size()){
            prod*=nums[j];
            maxProd = max(maxProd , prod);
            
            if(prod == 0){
                prod=1;
            }
          
            j++;
        }
        
        int prod2 =1;
        while(i >=0){
            prod2*=nums[i];
            maxProd = max(prod2 , maxProd);
            if(prod2==0){
                prod2=1;
            }
            i--;
        }
        return maxProd;
       
    }
};