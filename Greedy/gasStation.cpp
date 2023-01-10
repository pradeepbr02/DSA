class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ind =0;
        int gasSum=0;
        int costSum =0;
        for(auto it : gas){
            gasSum +=it;
        }
        for(auto it : cost){
            costSum+=it;
        }

        if(gasSum < costSum ){
            return -1;
        }

        int inTank =0;
        for(int i=0;i<gas.size();i++){
            inTank+=gas[i]-cost[i];

            if(inTank < 0){
                ind=i+1;
                inTank=0;
            }
        }

        return ind;


    }
};