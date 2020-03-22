//author signature : puskardeb4

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef unsigned int ui;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int N = (int)1e4 + 10;
const int MOD = (int)1e9 + 7;
const int INF = 1e9;

int t,  n, temp;
double arr[N];

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);	cout.tie(nullptr);
	//freopen("in_cc.txt","r",stdin);
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++)	cin >> arr[i];
		sort(arr, arr+n);
		for(int i = n-1; i >= 1; i--)
			arr[i-1] = (arr[i] + arr[i-1])/(2.0);
		cout << fixed << setprecision(8) << arr[0] << "\n";
	}
	return 0;
}