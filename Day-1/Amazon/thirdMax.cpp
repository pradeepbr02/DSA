int thirdMax(vector<int>&nums){
long max1=LONG_MIN,max2=LONG_MIN,max3=LONG_MIN;
int n=nums.size();
for(int i=0;i<n;i++){
if(nums[i]>max1){
max1=nums[i];
}
}
for(int i=0;i<n;i++){
if(nums[i]>max2&&nums[i]<max1){
max2=nums[i];
}
}
for(int i=0;i<n;i++){
if(nums[i]>max3&&nums[i]<max2){
max3=nums[i];
}
}
if(max3==LONG_MIN){
return max1;
}
else{
return max3;
}
}

//optimized
int thirdMax(vecotr<int>nums){
    sort(nums.begin() , nums.end());
    int i = nums.size()-2;
    while(i >=0){
        if(nums[i]!=nums[i+1]){
            count++;
        }
        if(count==2){
            return nums[i];
        }
        
    }
    return nums[nums.size()-1];
}