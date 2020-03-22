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
#endif

    string t;
    getline(cin, t);
    int tt = stoi(t);
    string s;
    while(tt--){
        char flag = 0;
        getline(cin, s);
        stringstream strm(s);
        vector<string> v;
        string token;
        while(getline(strm, token, ' '))
            v.pb(token);
        for(auto x : v){
            if(!x.compare("not")){
                flag = 1;
                break;
            }
        }
        if(flag)
            cout << "Real Fancy\n";
        else
            cout << "regularly fancy\n";
    }

#ifdef LOCAL_DEBUG
    cerr << "Time elapsed : " << 1.0 * clock()/CLOCKS_PER_SEC << "s\n";
#endif

	return 0;
}
