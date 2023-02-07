//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int countOfSubstrings(string S, int K) {
        // code here
        int i=0;
        int j=0;
        unordered_map<char , int>mp;
        int n = S.size();
        int count=0;
        while(j < n){
            mp[S[j]]++;
            if(j-i+1!=K){
            
                j++;
            }
            else if(j-i+1==K){
              
                if(mp.size()==K-1){
                    count++;
                }
                mp[S[i]]--;
                if(mp[S[i]]==0){
                    mp.erase(S[i]);
                }
                i++;
                j++;
            }
           
        }
        return count;
    }
};

//{ Driver Code Starts.

// } Driver Code Ends