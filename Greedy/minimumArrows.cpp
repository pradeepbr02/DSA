#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
 static bool comp(vector<int> &a, vector<int> &b)
    {
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin() , points.end() , comp);
        int count=1;
        
        int burst = points[0][1];

        for(int i=1;i<points.size();i++){
            if(points[i][0] > burst){
                count++;
                burst = points[i][1];
            }
        }
        return count;
    }
};