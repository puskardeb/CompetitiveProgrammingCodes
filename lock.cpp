//author signature : puskardeb4

#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

using namespace std;

int n, cost, t1, t2;
string s, str;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
	//freopen("in.txt","r",stdin);
	cin >> n >> s >> str;
	cost = 0;
	for(int i = 0; i < n; i++){
		t1 = s[i] - '0';
		t2 = str[i] - '0';
		cost += min(abs(t1 - t2), 10 - abs(t1 - t2));
	}
	cout << cost << "\n";
	return 0;
}