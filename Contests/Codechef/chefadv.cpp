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

int t, n, m, x, y, a, b, f;

int solve(){
	cin >> n >> m >> x >> y;
	a = 1;
	b = 1;
	if(a == n && b == m)
		return 1;
	else if((n - a) >= 0 && (m - b) >= 0){
		if((n - a)%x == 0 && (m - b)%y == 0)
			return 1;
	}
	++a;
	++b;
	if(a == n && b == m)
		return 1;
	else if((n - a) >= 0 && (m - b) >= 0){
		if((n - a)%x == 0 && (m - b)%y == 0)
			return 1;
	}
	return 0;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);	cout.tie(nullptr);
	//freopen("in_cc.txt","r",stdin);
	cin >> t;
	while(t--){
		//cout << "tc : " << t << "\n"; 
		if(solve() == 1)	cout << "Chefirnemo\n";
		else	cout << "Pofik\n";	
	}
	return 0;
}