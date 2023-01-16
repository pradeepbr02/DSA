class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        // Your code here
        vector<long long >res(n);
        stack<long long >st;
        st.push(-1);
        for(int i=n-1 ;i>=0;i--){
            
            while(st.top()!=-1 and st.top()<=arr[i]){
                st.pop();
            }
            
            res[i] = st.top();
            st.push(arr[i]);
        }
        return res;
    }
};