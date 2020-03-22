//author signature : puskardeb4

#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef unsigned int ui;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const ld pi = 3.141592653589793238462643383279;
const int N = (int)1e5 + 10;
const ull MOD = (ll)1e9 + 7;
const ll INF = (ll)1e18;

ull mod_multiplication(ull a, ull b, ull m = MOD){
	ull res = 0;
	a = a % m;
	while(b > 0){
		if(b&1)	res = (res % m + a % m) % m;
		a = (a % m + a % m) % m;
		b = b >> 1;
	}
	return res % m;
}

ull mod_exponentiation(ull a, ull b, ull m = MOD){
	ull res = 1;
	a = a % m;
	while(b > 0){
		if(b&1)	res = mod_multiplication(res, a, m);
		a = mod_multiplication(a, a, m);
		b = b >> 1;
	}
	return res % m;
}

ull a, b, n, diff, _a, _b, res;
int t;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);	cout.tie(nullptr);
	//freopen("in_cc.txt","r",stdin);
	cin >> t;
	while(t--){
		cin >> a >> b >> n;
		diff = abs(a - b);
		if(diff == 0){
			_a = mod_exponentiation(a, n);
			_b = mod_exponentiation(b, n);
			res = (_a % MOD + _b % MOD) % MOD;
			cout << res << "\n";
		}
		else if(diff == 1)
			cout << 1 << "\n";
		else{
			_a = mod_exponentiation(a, n, diff);
			_b = mod_exponentiation(b, n, diff);
			res = (_a % diff + _b % diff) % diff;
			cout << __gcd(res, diff) % MOD << "\n";
		}
	}
	return 0;
}