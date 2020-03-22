#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	double sum = 0, m = 0;
	for(int i = 0; i < n; i++){
		sum = 0;
		for(int j = i; j < n; j++){
			sum += arr[j];
			if(j - i + 1 >= k){
				m = m < (sum/(double)(j - i + 1)) ? (sum/(double)(j - i + 1)) : m;
			}
		}
	}
	cout << setprecision(13) << m;
	return 0;
}