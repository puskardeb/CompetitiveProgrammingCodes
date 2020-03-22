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

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

#ifdef LOCAL_DEBUG
	freopen("in_cc.txt","r",stdin);
    clock_t start = clock();
#endif

    int t, n, a, b;
    cin >> t;
    while(t--){
        cin >> n >> a >> b;
        vector<int> v[n];
        for(int i = 0; i < n; i++)
            cin >> v[i];
        
    }

#ifdef LOCAL_DEBUG
    cerr << "Time elapsed : " << 1.0 * (start - clock())/CLOCKS_PER_SEC << "s\n";
#endif

	return 0;
}
