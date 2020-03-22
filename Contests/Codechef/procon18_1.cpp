//author signature : puskardeb4

#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ui;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
//typedef push_back pb;
//typedef make_pair mp;

const int N = (int)1e5 + 10;
const int MOD = (int)1e9 + 7;
const int INF = (int)1e9;

int t, n, k, c, m;
int a[101], temp[101];

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
	//freopen("in_cc.txt","r",stdin);
	cin >> t;
	while(t--){
		for(int i = 0; i < 101; i++)
			temp[i] = 0;
		cin >> n >> k;
		for(int i = 0; i < n; i++)
			cin >> a[i];
		for(int i = 0; i <= (n-k); i++){
			for(int j = i; j < (i+k); j++){
				temp[i] = temp[i] + a[j];
			}
		}
		m = 0;
		for(auto x : temp)
			m = max(m, x);
		cout << m << "\n";
	}
	return 0;
}
