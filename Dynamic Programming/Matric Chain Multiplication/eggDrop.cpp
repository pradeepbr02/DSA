class Solution {
public:
int dp[101][10001];

int solve(int e, int f) {
	if(f == 0 || f == 1 || e == 1) return f;
	if(dp[e][f] != -1) return dp[e][f];
	int result = INT_MAX;
	int lo = 1, hi = f;
	while(lo <= hi) {
		int mid = lo + (hi - lo) / 2; 
		int temp1 = solve(e - 1, mid - 1);
		int temp2 = solve(e, f - mid);
		if(temp1 > temp2) hi = mid - 1;
		else lo = mid + 1;
		int temp = 1 + max(temp1, temp2);
		result = min(result, temp);
	}
	return dp[e][f] = result;
}
    int superEggDrop(int k, int n) {

        memset(dp , -1 , sizeof(dp));
        return solve(k , n);
        
    }
};