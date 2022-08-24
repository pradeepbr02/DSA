class Solution 
{
    public:
    
    static bool comparision(Job a , Job b){
    return a.profit > b.profit;
}
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr , arr+n , comparision);
        int maxi=arr[0].dead;
        for(int i=1;i<n;i++){
            maxi = max(maxi , arr[i].dead);
        }
        
        int units[maxi+1];
        for(int i=0;i<=maxi;i++){
            units[i]=-1;
        }
        int Maxprofit=0,jobCount=0;
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead; j>0 ;j--){
                if(units[j]==-1){
                    units[j]=i;
                    jobCount++;
                    Maxprofit+=arr[i].profit;
                    break;
                }
            }
        }
        vector<int>v;
        v.push_back(jobCount);
        v.push_back(Maxprofit);
        return v;
    } 
};