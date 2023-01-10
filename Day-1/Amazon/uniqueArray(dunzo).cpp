//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        // Code here
        long long count=0;
        sort(arr.begin() , arr.end());
        for(int i=1; i<N;i++){
            while(arr[i]<=arr[i-1]){
                arr[i]++;
                count++;
            }
        }
        return count;
    }
};

