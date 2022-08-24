bool comparision(Item a , Item b){
        double calc1 = (double)a.value/(double)a.weight;
        double calc2 = (double)b.value/(double)b.weight;
        
        return calc1 > calc2;
    }
class Solution
{
  
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr , arr+n , comparision);
        double totalValue=0;
    
                 for(int i=0;i<n;i++){
       
            if(arr[i].weight <= W){
                
                totalValue+=(double) arr[i].value;
                
                W-=arr[i].weight;
      
            }
            else{
   
                totalValue+=(arr[i].value)*((double)W/arr[i].weight);

                break;
               
            }
        }
  
        return totalValue;
   
    }
        
};