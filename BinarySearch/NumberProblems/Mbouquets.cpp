class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int start = *min_element(bloomDay.begin() , bloomDay.end());
        int end = *max_element(bloomDay.begin() , bloomDay.end());
        
        if(bloomDay.size() < m*k){
            return -1;
        }
        
        while(start < end){
            int mid = (start+end)/2;
            int adj=0 , bouq=0;
            for(auto it : bloomDay){
                if(it > mid){   
                    adj=0;
                }
                else{
                    adj++;
                    
                    if(adj==k){
                        adj=0;
                        bouq++;
                    }
                }
                if(bouq>=m){
                    break;
                }
            }
            if(bouq < m){
                start=mid+1;
            }
            else{
                end = mid;
            }
        }
        return start;
    }
};