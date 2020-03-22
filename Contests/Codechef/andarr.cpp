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

int t, n, q, l, r, c, a[N];

int is_perfect(int k){
	double x = sqrt(k);
	if(k - floor(x) == 0)
		return 1;
	return 0;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);	cout.tie(nullptr);
	//freopen("in_cc.txt","r",stdin);
	cin >> t;
	while(t--){
		cin >> n >> q;
		for(int i = 0; i < n; i++)	cin >> a[i];
		for(int i = 0; i < q; i++){
			cin >> l >> r;
			--l;
			--r;
			c = 0;
			for(int j = l; j <= r; j++){
				for(int u = j; u <= r; u++){
					int temp = a[u];
					for(int k = j; k <= u; k++)
						temp = temp & a[k];
					if(is_perfect(temp))
						c++;
				}
			}
			cout << c << "\n";
		}

	}
	return 0;
}