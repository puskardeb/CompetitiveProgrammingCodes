//author signature : puskardeb4

#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int N = (int)1e5 + 10;
const int MOD = (int)1e9 + 7;
const int INF = 1e9;

using namespace std;

int n, sz;
string ans;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
	//freopen("in.txt","r",stdin);
	cin >> n;
	for(int i = 0; i < n; i++){
		if(i&1)
			ans = ans + "I love that ";
		else
			ans = ans + "I hate that ";
	}
	sz = ans.size() - 5;
	cout << ans.substr(0, sz) + "it" << "\n";
	return 0;
}