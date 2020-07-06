#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, n, amt;	
ll v[400];
ll dp[400];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("in.txt","r",stdin);
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++)
			cin >> v[i];
		cin >> amt;
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;
		for(int i = 0; i < n; i++){
			for(ll j = v[i]; j <= amt; j++){
				dp[j] = dp[j] + dp[j-v[i]];
			}
		}
		cout << dp[amt] << "\n";
	}
}