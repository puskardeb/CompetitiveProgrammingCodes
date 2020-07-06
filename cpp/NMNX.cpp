#include <bits/stdc++.h>
#define p 1000000007
typedef long long ll;
using namespace std;

int modExpo(int x,int y){
	int res = 1;   
 
    x = x % p;   
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1; 
        x = (x*x) % p;  
    }
    return res;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("in.txt","r",stdin);
	ll t;
	cin >> t;
	while(t--){
		int n, k;
		vector<int> v;
		cin >> n >> k;
		for(int i = 0; i < n; i++){
			int t1;
			cin>>t1;
			v.push_back(t1);
		}
		sort(v.begin(),v.end());
		ll temp,x=1,t2;
		for(int i = 1; i < (int)ceil(n/2); i++){
			temp = i * (n - i);
			cout << (v[i] * v[n-i-1]) << "\t" << temp << "\n";
			x = (x%p * modExpo((v[i] * v[n-i-1]), temp))%p;
		}
		cout << x << "\n";
	}
}