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

int t, n;
vector<int> arr;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);	cout.tie(nullptr);
	//freopen("in_cc.txt","r",stdin);
	cin >> t;
	while(t--){
		cin >> n;
		arr.resize(n);
		for(int i = 0; i < n; i++)	cin >> arr[i];
		sort(arr.begin(), arr.end());
		int diff = INT_MAX;
		for(int i = 0; i < n - 1; i++){
			diff = min(diff, abs(arr[i] - arr[i+1]));
		}
		cout << diff << "\n";
	}
	return 0;
}