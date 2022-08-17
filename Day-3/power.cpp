#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        long long y =n;
        double res=1;
        if(n < 0){
            y=abs(y);
}
        while(y){
            if(y % 2==0){
                x*=x;
                y=y/2;
}
            else{
                res*=x;
                y--;
            }
            
}
        if(n < 0){
            res = double(1/double(res));
        }
        
        return res;
       

    }
};