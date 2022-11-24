class Solution {
public:
    int trap(vector<int>& height) {
        int rightMax=0,leftMax=0;

        int left=0 , right=height.size()-1;

        int res=0;

        while(left <= right){

            if(height[left] <= height[right]){

                if(leftMax <= height[left]){

                    leftMax = height[left];

                    left++;
                }
                else{
                    res+=leftMax - height[left];

                    left++;
                }
            }
            else{
                if(rightMax <= height[right]){

                    rightMax = height[right];

                    right--;
                }
                else{

                    res+=rightMax - height[right];
                    
                    right--;
                }
            }
    
        }
        return res;
    }
};