class Solution {
public:
    int minCost(string colors, vector<int>& time) {
        int res=0;
        int i=0;
        int n= colors.size();
        while(i < n-1){
            int sum=0;
            int maxi = -1;
            if(colors[i]==colors[i+1]){

                while(colors[i]==colors[i+1] and i<n-1){
                sum+=time[i];
                maxi=max(maxi , time[i]);
                i++;

            }
        
            sum+=time[i];
            maxi=max(maxi , time[i]);
            res+=sum-maxi;
        }
        else{
            i++;
        }
        }
        return res;

    }
};