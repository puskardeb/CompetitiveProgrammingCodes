#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int den[] = {1, 5, 10, 20, 100};
	int n = 5;
	ll m = ULONG_MAX;
	int sum;
	cin >> sum;
	ll dp[sum + 1];
	for(int i = 1; i <= sum; i++){
		for(int j = 0; j < n; j++){
			if(den[j] <= i){
				m = min(dp[i - den[j]], m) + 1;
			}
		}
		dp[i] = m;
	}

	cout << dp[sum] << "\n";
	
	return 0;
}