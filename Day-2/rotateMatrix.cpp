#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
           vector<vector<int>> temp(n,vector<int>(n,0));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                temp[i][j]=matrix[i][j];
}
        }
        
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                matrix[i][j]=temp[n-1-j][i];
            }
        }
    

        
    }
};