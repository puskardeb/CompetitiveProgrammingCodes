#include <bits/stdc++.h>

typedef long long ll;
using namespace std;
string s;

void solve(){
	int start = -1, end = -1, flag = 0, c1 = 0, c2 = 0;
	for(int i = 0; i < s.size() - 1; ){
		if(s[i] == 'A' && s[i+1] == 'B'){
			c1++;
			i += 2;
		}
		else if(s[i+1] == 'A' && s[i] == 'B'){
			c2++;
			i += 2;
		}
		else
			i++;
	}
	if(c1 >= 1 && c2 >= 1)
		cout << "YES\n";
	else
		cout << "NO\n";

}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> s;
	solve();
	
	return 0;
}