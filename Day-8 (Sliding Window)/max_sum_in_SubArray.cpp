class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int>res;
        deque<int>que;
        int j=0 , i=0;
        while(j < n){
            while(que.size() and arr[j] > que.back()){
                que.pop_back();
            }
            que.push_back(arr[j]);
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
                res.push_back(que.front());
                if(arr[i]==que.front()){
                    que.pop_front();
                }
                i++;
                j++;
            }
        }
        return res;
    }
};