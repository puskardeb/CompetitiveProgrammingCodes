#include <bits/stdc++.h>
using namespace std;

void update(int BIT[], int n, int idx, int val){
	++idx;
	while(idx <= n){
		BIT[idx] += val;
		idx = idx + (idx & (-idx));
	}
}

int getSum(int BIT[], int n, int idx){
	int sum = 0;
	++idx;
	while(idx > 0){
		sum += BIT[idx];
		idx = idx - (idx & (-idx));
	}
	return sum;
}

void build(int BIT[], int arr[], int n){

	memset(BIT, 0, ((n+1)*sizeof(BIT[0])));
	for(int i = 0; i < n; i++)
		update(BIT, n, i, arr[i]);
}

int main(){
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	freopen("in.txt","r",stdin);
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int BIT[n+1];
	build(BIT,arr,n);
	cout << (getSum(BIT, n, 4) - getSum(BIT, n, 1)) << "\n";
	return 0;
}