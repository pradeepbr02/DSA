//demonstration of 0/1 knapsack using recursion

class solution{
    public:

    int knapSack(vector<int>val , vector<int>wt , int C , int n){
        if(n==0 or C==0){
            return 0;
        } //base case

        if(wt[n-1] <= C){
            return max(val[n-1]+knapSack(val , wt , C-wt[n-1] , n-1) , knapSack(val , wt , C , n-1));
        } //either choose the item or not if weight of item is less than capacity;;

        else if(wt[n-1] > C){
            return knapSack(val , wt , C , n-1);
        } //dont choose the item if that item weight is greater than capacity ..move to next element
    }
};