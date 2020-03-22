//author signature : puskardeb4

#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef push_back pb;
typedef make_pair mp;

using namespace std;

int P, S, c;
vector<pair<int, int>> a;
vector<pair<int, int>> v;

bool sort_asc(const pair<int, int> &a, const pair<int, int> &b){
	if(a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
	//freopen("in.txt","r",stdin);
	cin >> P >> S;
	a.resize(S);
	v.resize(P);
	for(int tc = 0; tc < P; tc++){
		for(int i = 0; i < S; i++)	cin >> a[i].first;
		for(int i = 0; i < S; i++)	cin >> a[i].second;
		sort(a.begin(), a.end());
		c = 0;
		for(int i = 0; i < S - 1; i++){
			if(a[i].second > a[i+1].second)	++c;
		}
		v[tc] = mp(tc+1, c);
	}
	sort(v.begin(), v.end(), sort_asc);
	for(int i = 0; i < P; i++)
		cout << v[i].first << "\n";
	return 0;
}