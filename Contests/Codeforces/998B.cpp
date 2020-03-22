#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("in.txt","r",stdin);
	int n, k;
	cin >> n >> k;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	int odd = 0, even = 0;
	vector<int> possible_cut;
	for(int i = 0; i < n - 1; i++){
		if(!(v[i]&1))
			odd++;
		else
			even++;
		if(odd == even)
			possible_cut.push_back(i);
	}

	if(possible_cut.size() == 0){
		cout << 0 << "\n";
		return 0;
	}

	vector<int> diff;
	for(int i = 0; i < possible_cut.size(); i++)
		diff.push_back(abs(v[possible_cut[i]] - v[possible_cut[i]+1]));
	int cuts = 0, sum = 0;
	sort(diff.begin(), diff.end());


	for(int i = 0; i < diff.size(); i++){
		sum += diff[i];
		if(sum <= k)
			cuts++;
		else
			break;
	}
	cout << cuts << "\n";
	return 0;
}