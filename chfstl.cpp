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

string a, b;
int t, mn, mx;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);	cout.tie(nullptr);
	//freopen("in.txt","r",stdin);
	cin >> t;
	while(t--){
		cin >> a >> b;
		mn = mx = 0;
		for(int i = 0; i < a.size(); ++i){
			if(b[i] != '?' && a[i] != '?' && a[i] != b[i])
				++mn;
			if(b[i] == '?' || a[i] == '?')
				++mx;
		}
		cout << mn << " " << (mn+mx) << "\n";
	}	
	return 0;
}