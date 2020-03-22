#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
typedef long long ll;
using namespace std;

int main(){
	
	while(1){
		int arr[200];
		int i = 0, n;
		while((cin >> n) && (n != -999999)){
			arr[i++] = n;
		}
		long mx = LONG_MIN;
		long sum = 1;
		for(int j = 0; j < i; j++){
			sum = 1;
			for(int k = j; k < i; k++){
				sum = sum * arr[k];
			}
			mx = max(mx, sum);
		}
		printf("%ld",mx);
	}
	return 0;
}