//author signature : puskardeb4

#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

using namespace std;

int tc, n, pre[32][32], m;

int count_digits(int n){
	int c = 0;
	while(n){
		++c;
		n = n >> 1;
	}
	return c;
}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
	//freopen("in.txt","r",stdin);

	for(int i = 0; i < 32; i++){
		for(int j = 0; j < 32; j++)
			pre[i][j] = -1;
	}

	for(int i = 1; i < 32; i++){
		for(int j = 1; j < i; j++)
			pre[i][j] = (1 << (i - 1)) + (1 << (i - 1 - j));
	}

	cin >> tc;
	while(tc--){
		cin >> n;
		m = INT_MAX;
		for(int i = count_digits(n); i < 32; i++){
			for(int j = 1; j <= i; j++)
				m = min(m, abs(n - pre[i][j]));
		}
		cout << m << "\n";
	}
	return 0;
}