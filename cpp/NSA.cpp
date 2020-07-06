#include <bits/stdc++.h>
#define N 100000
typedef long long ll;
using namespace std;

int t, maxidx, minidx;
string s, temp;
char x, mx, mn;

int count(string s){
	int c = 0;
	int n = s.size();
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(s[i] < s[j])
				c++;
		}
	}
	return c;
}

int getMinIdx(string s){
	minidx = 0;
	mn = s[minidx];
	int n = s.size();
	for(int i = 1; i < n; i++){
		if(mn > s[i]){
			minidx = i;
			mn = s[i];
		}
	}
	return minidx;
}

int getMaxIdx(string s){
	maxidx = 0;
	int n = s.size();
	mx = s[maxidx];
	for(int i = 1; i < n; i++){
		if(mx < s[i]){
			maxidx = i;
			mx = s[i];
		}
	}
	return maxidx;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("in.txt","r",stdin);

	
	cin >> t;
	while(t--){
		//c = 0;
		cin >> s;
		temp = s;
		int c1 = count(temp);
		int l1 = getMaxIdx(temp);
		int l2 = getMinIdx(temp);
		int f = abs(temp[l2] - temp[l1]);

		//cout << c1 << " " << l1 << " " << l2 << " " << f <<"\n";

		temp[l1] = temp[l2];
		int c2 = count(temp) + f;

		temp = s;
		l1 = getMaxIdx(temp);
		l2 = getMinIdx(temp);
		temp[l2] = temp[l1];
		int c3 = count(temp) + f;

		int m = min(min(c3,c2),c1);

		//cout << c1 << "\t" << f << "\n";

		cout << m << "\n";

	}
	return 0;
}