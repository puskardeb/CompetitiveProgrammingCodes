#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	for(int i = 1; i < 9; i++)
		v.push_back(i);
	int n = v.size();
	for(int i = 0; i < v.size()/2; i++){
		int temp = v[i];
		v[i] = v[n - 1 -i];
		v[n - i - 1] = temp;
	}
	for(auto &x : v)
		cout<<x<<"\t";
	return 0;
}