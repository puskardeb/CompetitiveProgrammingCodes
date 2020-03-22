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
const int MOD = (int)1e9 + 7;
const ll INF = (ll)1e18;

int t, n;
ll c, odd, even, ct;
vector<ll> a;
unordered_map<ll, ll> m;

ll count(const vector<ll> &v, ll x){
	m.clear();
	ct = 0;
	for(int i = 0; i < n; i++){
		ll temp = x ^ a[i];
		if(m.find(temp) != m.end())
			ct += m[temp];
		m[a[i]]++;
	}
	return ct;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);	cout.tie(nullptr);
	//freopen("in_cc.txt","r",stdin);
	cin >> t;
	while(t--){
		cin >> n;
		a.clear();
		a.resize(n);
		odd = even = 0;
		c = n;
		for(int i = 0; i < n; i++)
			cin >> a[i];
		c = c * (n - 1);
		c = c >> 1;
		for(int i = 0; i < n; i++){
			if(a[i]&1)	++odd;
			else	++even;
		}
		c -= (odd * even);
		c -= (count(a, 2) + count(a, 0));
		cout << c << "\n";
	}
	return 0;
}