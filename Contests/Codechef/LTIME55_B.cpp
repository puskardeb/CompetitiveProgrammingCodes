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

int t, n, m, tmp;
vector<string> s1;
vector<string> s2;

int count_zeroes(const string &s){
	int c = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '0')
			++c;
	}
	return c;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);	cout.tie(nullptr);
	//freopen("in_cc.txt","r",stdin);
	cin >> t;
	while(t--){
		cin >> n >> m;
		s1.resize(n);
		s2.resize(n);
		int flag = 0;
		for(int i = 0; i < n; i++)
			cin >> s1[i] >> s2[i];
		for(int i = 0; i < n; i++){
			tmp = count_zeroes(s2[i]);
			//cout << tmp << "\n";
			if(s1[i].compare("correct") == 0){
				if(tmp > 0){
					flag = 1;
					break;
				}
			}
			else if(s1[i].compare("wrong") == 0){
				if(tmp == 0){
					flag = 2;
					break;
				}
			}
		} 
		if(flag == 1)	cout << "INVALID\n";
		else if(flag == 2)	cout << "WEAK\n";
		else	cout << "FINE\n";
	}
	return 0;
}