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

int testcases, n, k, S[N], cnt;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);	
    cout.tie(nullptr);
	//freopen("in_cc.txt","r",stdin);
    cin >> testcases;
    while(testcases--){
        cin >> n >> k;
        cnt = 0;
        for(int i = 0; i < n; i++)
            cin >> S[i];
        sort(S, S+n, greater<int>());
        for(int i = 0; i < n; i++){
            if(S[k-1] <= S[i])
                cnt++;
        }
        cout << cnt << "\n";
    }
	return 0;
}