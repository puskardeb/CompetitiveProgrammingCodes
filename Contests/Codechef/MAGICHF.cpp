//author signature : puskardeb4

#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef unsigned int ui;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const ld pi = 3.141592653589793238462643383279;
const int N = (int)1e5 + 10;
const int MOD = (int)1e9 + 7;
const ll INF = (ll)1e18;

int t,n,x,s,a,b,arr[N];

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);	cout.tie(nullptr);
	//freopen("in_cc.txt","r",stdin);
	cin >> t;
	while(t--){
		cin >> n >> x >> s;
		for(int i = 1; i <= n; i++)
			arr[i] = 0;
		arr[x] = 1;
		while(s--){
			cin >> a >> b;
			int temp = arr[a];
			arr[a] = arr[b];
			arr[b] = temp;
		}
		for(int i = 1; i <= n; i++){
			if(arr[i]){
				cout << i << "\n";
				break;
			}
		}
	}
	return 0;
}