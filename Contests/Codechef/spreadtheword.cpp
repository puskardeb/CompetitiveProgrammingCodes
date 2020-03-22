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

int t, n, A[N], prefix[N], idx, sum;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("in_cc.txt","r",stdin);
    cin >> t;
    while(t--){
        cin >> n;
        idx = -1;
        for(int i = 0; i < n; i++)
            cin >> A[i];
        prefix[0] = A[0];
        for(int i = 1; i < n; i++)
            prefix[i] = prefix[i-1] + A[i];
        sum = 0;
        for(int i = 1; i < n; i++){
            if((sum + prefix[i]) >= n){
                idx = i;
                break;
            }
            else
                sum = prefix[i];
        } 
        cout << idx << "\n";
    }
	return 0;
}