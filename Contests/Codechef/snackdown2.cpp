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
int t;

int idx, arr[N], v[N], k, m, n;

int is_decreasing(int *a, int start, int end){
    for(int i = start; i < end - 1; i++){
        if(a[i] > a[i + 1])
            return 1;
    }
    return 0;
}

void solve(){
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    m = arr[0];
    idx = 0;
    for(int i = 1; i < n; i++){
        if(m > arr[i]){
            m = arr[i];
            idx = i;
        }
    }
    if(is_decreasing(arr, idx, n) || is_decreasing(arr, 0, idx)){
        cout << "NO\n";
        return;
    }
    k = 0;
    for(int i = idx; i < n; i++)
        v[k++] = arr[i];
    for(int i = 0; i < idx; i++)
        v[k++] = arr[i];
    if(is_decreasing(v, 0, n))
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//freopen("in_cc.txt","r",stdin);
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}