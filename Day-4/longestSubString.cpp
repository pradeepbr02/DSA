#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int>v(256,-1);
        int left=0;
        int right=0;
        int len=0;
        int n=s.size();
        while(right < n){
            if(v[s[right]]!=-1){
                left=max(left , v[s[right]]+1);
            }
            v[s[right]]=right;
            len = max(len , right-left+1);
            right++;
        }
        return len;
        

    }
};