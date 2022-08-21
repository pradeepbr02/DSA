vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int k) {
    int i=0 , j=0;
    vector<long long>v;

    deque<long long>q;

    while(j < N){

        if(A[j] < 0){

            q.push_back(A[j]);
            
        }

        if(j-i+1 < k){

            j++;
        }

        else if(j-i+1==k){

            if(q.empty()){

                v.push_back(0);
            }

            else{

                v.push_back(q.front());

                if(A[i] < 0){

                    q.pop_front();
                }
            }
            i++;
            
            j++;
        }
    }
    return v;
 }