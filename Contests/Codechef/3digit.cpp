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

ll t, n;

int has3(ll n){
	int c = 0;
	while(n){
		int k = n%10;
		if(k == 3)	++c;
		n /= 10;
	}
	if(c >= 3)	return 1;
	return 0;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);	cout.tie(nullptr);
	//freopen("in_cc.txt","r",stdin);
	cin >> t;
	while(t--){
		cin >> n;
		while(true){
			++n;
			if(has3(n)){
				cout << n << "\n";
				break;
			}
		}
	}
	return 0;
}