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
const int N = (int)1e9 + 1;
const int MOD = (int)1e9 + 7;
const ll INF = (ll)1e18;

int t, l, r;
int prime[N];

void sieve(){
	for(int i = 0; i < N; i++)
		prime[i] = 1;
	prime[1] = 0;
	for(int i = 2; i*i < N; i++){
		if(prime[i]){
			for(int j = 2; j*i < N; j++){
				prime[i*j] = 0;
			}
		}
	}
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);	cout.tie(nullptr);
	freopen("in.txt","r",stdin);
	sieve();
	cin >> t;
	while(t--){
		cin >> l >> r;
		for(int i = l; i <= r; i++){
			if(prime[i])	cout << i << "\n";
		}
		cout << "\n";
	}
	return 0;
}