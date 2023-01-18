//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string buildLowestNumber(string num, int k);
// Driver program to test above function
int main()
{
    int t,n;
    string str;
    cin>>t;
    while(t--)
    {
    cin>>n;
    cin>>str;
    cout << buildLowestNumber(str, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends


string buildLowestNumber(string num, int k)
{
    //code here.
    stack<char>st;
    
    for(int i=0;i<num.size() ;i++){
        
        while(!st.empty() and st.top() > num[i] and k>0){
            st.pop();
            k--;
        }
        
        st.push(num[i]);
    }
    
    while(k > 0){
        st.pop();
        k--;
    }
    
    string ans ="";
    
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    int count=0;
    while(ans.length() >1 and ans.back()=='0'){
        ans.pop_back();
    }
   
    reverse(ans.begin() , ans.end());
    
    return ans;
}