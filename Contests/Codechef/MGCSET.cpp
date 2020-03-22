#include <bits/stdc++.h>
#define N 31
#define M 1001
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("in.txt","r",stdin);
	int t,n,m;
	long arr[N];
	long res;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		res = 0;
		for(int i = 0; i < n; i++){
			if(arr[i]%m == 0)
				res++;
		}

		res = (1 << res) - 1;
		cout << res << "\n";
	}
 
	return 0;
} 