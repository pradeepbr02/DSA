bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}


class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.

    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int , int>>v(n);

        for(int i=0;i<n;i++){

            v[i].first = start[i];

            v[i].second=end[i];
        }
        sort( v.begin(),v.end(),sortbysec);

        int ans =1;

        int limit = v[0].second;

        for(int i=1;i<n;i++){
            
            if(v[i].first > limit){

                ans++;

                limit = v[i].second;
            }
        }
        return ans;
    }
};

