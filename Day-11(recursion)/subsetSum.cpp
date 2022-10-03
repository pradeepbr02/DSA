class Solution
{
public:

void solve(int i , int sum , vector<int> &arr , int N , vector<int>&v){
    if(i==N){
        v.push_back(sum);
        return ;
    }

    solve(i+1 , sum+arr[i] , N , v );
    solve(i+1 , sum , arr , N , v);
}

    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        int sum=0;
        int i=0;
        vector<int >v;
        solve(i , sum , arr, N , v);

        return v;
   
    }
};