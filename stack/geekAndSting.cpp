//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        // code here
        stack<char>st;
        
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
                continue;
            }
            if(!st.empty() and st.top()==s[i]){
                st.pop();
            }
            
            else{
                st.push(s[i]);
            }
        }
        
        string res ="";
        if(st.empty()){
            return "-1";
        }
        
        while(!st.empty()){
            res+=st.top();
            st.pop();
            }
            
            reverse(res.begin() , res.end());
            
            return res;
    }
};


