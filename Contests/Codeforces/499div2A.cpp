#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
typedef long long ll;
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	int temp = 0;
	bool flag = false;
	char str[s.size()];
	for(int i = 0; i < s.size(); i++)
		str[i] = s[i];
	sort(str, str + s.size());
	int l = s.size();
	int start = 0;
	int cnt = str[start] - 'a' + 1;
	--k;
	if(k == 0)
		cout << cnt;
	else{
		for(int i = 1; i < l; i++){
			if(abs(str[i] - str[start]) != 1 && abs(str[i] - str[start]) != 0){
				cnt += str[i] - 'a' + 1;
				--k;
				start = i;
			}
			if(k == 0)
				break;
		}
	}
		if(k != 0)
			cout << -1;
		else
			cout << cnt;
	}
	return 0;
}