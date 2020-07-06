#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int n, k, arr[100000];

bool memo(int n, int k){
	if(k == 0)
		return true;
	if(n == 0 && k != 0)
		return false;
	if(arr[n - 1] > k)
		return memo(n - 1, k);
	return memo(n - 1, k) || memo(n - 1, k - arr[n - 1]);
}

void solve(){
	cout << memo(n, k);
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> k;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	solve();
	
	return 0;
}