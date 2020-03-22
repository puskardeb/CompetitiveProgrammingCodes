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
int p[18];

inline void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

inline void print(const int *v, int &n){
	for(int i = 1; i <= n; i++)
		cout << v[i] << " ";
	cout << "\n";
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);	cout.tie(nullptr);
	//freopen("in_cc.txt","r",stdin);
	cin >> n;
	for(int i = 1; i < n; i++)
		p[i] = i + 1;
	p[n] = 1;
	if(n&1)
		swap(p[(n + 1) >> 1], p[n]);
	else
		swap(p[n >> 1], p[n]);
	print(p, n);
	p[1] = n;
	for(int i = 1; i < n; i++)
		p[i + 1] = i;
	print(p, n);
	return 0;
}