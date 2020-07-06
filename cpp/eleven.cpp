#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unordered_set<ll> fibo;
	int n;
	cin >> n;
	int a = 1, b = 1, c;
	fibo.insert(a);
	for(int i = 3; i <= 1001; i++){
		c = a + b;
		a = b;
		b = c;
		fibo.insert(c);
	}
	for(int i = 1; i <= n; i++){
		if(fibo.find(i) != fibo.end())
			cout << "O";
		else
			cout << "o";
	}
	return 0;
}