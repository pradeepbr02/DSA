class solution{
    public:
    int minEatingSpeed(vector<int>&piles , int h){
        int start=0 , end=*max_element(piles.begin() , piles.end());
        int ans;

        while(start <= end){
            int mid = (start + end)/2;

            long long int total =0;
            for(int i=0;i<piles.size();i++){
                total+=piles[i]/mid + ((piles[i] % mid)!=0);
            }
            if(total <= h){
                ans=mid;
                end = mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }

};