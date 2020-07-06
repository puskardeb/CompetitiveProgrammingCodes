#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll n;

ll base6(ll num){
	ll res = 0;
	while(num > 0){
		res = 10*res + num%6;
		num /= 6;
	}
	return res;
}

ll sumofdig(ll num){
	ll sum = 0;
	while(num > 0){
		sum += num%10;
		num /= 10;
	}
	return sum;
}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("in.txt", "r", stdin);
	cin >> n;
	vector<ll> v(n);
	vector<ll> a(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];
	for(int i = 0; i < n; i++){
		a[i] = sumofdig(base6(v[i]));
	}
	for(auto x : a)
		cout << x << "\n";
	return 0;
}