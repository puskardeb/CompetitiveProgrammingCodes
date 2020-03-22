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

int primes[N];
void sieve(){
    primes[0] = 0;
    primes[1] = 0;
    for(int i = 2; i < N; i++)
        primes[i] = 1;
    for(int i = 2; i*i < N; ++i){
        if(primes[i]){
            for(int j = 2; j*i < N; ++j)
                primes[i*j] = 0;
        }
    }
}

int is_semiprime(int num){
    for(int i = 1; i*i <= num; i++){
        if(num%i == 0){
            int k = num/i;
            if(primes[k] && primes[i] && (k != i)){
                //cout << "factors : " << i << " " << k << "\n";
                return 1;
            }
        }
    }
    return 0;
}

int t, n;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	//freopen("in_cc.txt","r",stdin);
    sieve();
    cin >> t;
    while(t--){
        cin >> n;
        int flag = 0;
        for(int i = 0; i <= (n >> 1); i++){
            //cout << i << " : " << is_semiprime(i) << " " << n-i << " : " << is_semiprime(n-i) << "\n";
            if(is_semiprime(i) && is_semiprime(n-i)){
                flag = 1;
                break;
            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
	return 0;
}