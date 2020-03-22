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

ll m, n, idx;
string s, t, x, y;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);	cout.tie(nullptr);
	//freopen("in_cf.txt","r",stdin);
	cin >> m >> n;
	cin >> s >> t;
	if(s == t){
		cout << "YES";
		return 0;
	} 
	idx = -1;
	for (int i = 0; i < m; ++i){
		if(s[i] == '*')
			idx = i;
	}
	if(idx == -1){
		cout << "NO";
		return 0;
	}
	x = s.substr(0, idx);
	y = s.substr(idx+1);
	//cout << x << " " << y;
	if(t.find(x) != 0){
		cout << "NO";
		return 0;
	}
	t = t.substr(idx);
	reverse(t.begin(), t.end());
	reverse(y.begin(), y.end());
	if(t.find(y) != 0){
		cout << "NO";
		return 0;
	}
	cout << "YES";
	return 0;
}