#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("in.txt","r",stdin);

	int n, temp, t, start, end, count;
	cin >> t;
	while(t--){
		vector<int> v;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> temp;
			v.push_back(temp);
		}
		count = n;
		start = 0, end = 0;
		for(int i = 0; i < n - 1; i++){
			if(v[i] > v[i + 1])
				start = i + 1;
			count += i + 1 - start;
		}
		cout << count << "\n";
	}
	return 0;
}