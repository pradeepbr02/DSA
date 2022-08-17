#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        unordered_map<int , bool>mp,mp2;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    mp[i]=true;
                    mp2[j]=true;
                }
}
}
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(mp[i]==true || mp2[j]==true){
                    matrix[i][j]=0;
}
}
}

        
    }
};