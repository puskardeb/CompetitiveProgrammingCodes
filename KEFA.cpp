#include <bits/stdc++.h>

typedef long long ll;
using namespace std;



void solve(vector<int> v){
	for(int i = 0; i < v.size(); i++)
		cin >> v[i];
	int mx = 0, l = 0;
	for(int i = 0; i < v.size() - 1; i++){
		if(v[i] <= v[i + 1])
			++l;
		else
			l = 0;
		mx = max(mx, l);
	}
	cout << mx+1 << "\n";
} 

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> v(n);
	solve(v);
	return 0;
}