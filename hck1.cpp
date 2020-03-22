#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("in.txt","r",stdin);
	int n, d;
	cin >> n >> d;
	string s;
	int c;
	
	for(int i = 0; i < n; i++){
		cin >> c;
		s = s + to_string(c);
	}
	d = d%n;
	//cout << d << n;
	string temp1 = s.substr(d, n - d);
	string temp2 = s.substr(0, d);
	temp2 = temp1 + temp2;
	for(int i = 0; i < n; i++){
	 	cout << temp2[i] << " ";
	}
	cout << "\n";
}