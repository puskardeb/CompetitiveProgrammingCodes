#include <bits/stdc++.h>
#define pb push_back 
#define N (long long)1e5 + 1

typedef long long ll;
using namespace std;

ll n;
ll freq[N+1], arr[N], dp[N+1];

ll memo(){
	dp[0] = 0;
	dp[1] = freq[1];
	for(ll i = 2; i <= N; i++)
		dp[i] = max(dp[i - 1], dp[i - 2] + freq[i] * i);
	return dp[N];
}

void solve(){
	cout << memo();
}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("in.txt","r",stdin);
	cin >> n;
	for(ll i = 0; i < n; i++)
		cin >> arr[i];
	for(ll i = 0; i <= N; i++){
		freq[i] = 0;
		dp[i] = -1;
	}
	for(ll i = 0; i < n; i++)
		freq[arr[i]]++;
	
	solve();
}