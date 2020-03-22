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

int t, a, _b;
string b;

int reduce(const string &b, const int &a){
	int temp = 0;
	for(int i = 0; i < b.size(); ++i)
		temp = (temp*10 + (b[i] - '0')) % a;
	return temp;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);	cout.tie(nullptr);
	//freopen("in.txt","r",stdin);
	cin >> t;
	while(t--){
		cin >> a >> b;
		if(a == 0)	cout << b << "\n";
		else{
			_b = reduce(b, a);
			cout << __gcd(a, _b) << "\n";
		}
	}
	return 0;
}