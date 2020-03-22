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

int tree[N], arr[N];
int n, t;
ll S;
pair<int, int> p[N];

void build(){
	fill(tree, tree + (n << 1), 0);
}

void print(){
	for(int i = 0; i < (n<<1); i++)
		cout << tree[i] << "\t";
	cout << "\n";
}

void update(int i, int val){
	--i;
	for(tree[i += n] = val; i > 1; i = i >> 1){
		tree[i >> 1] = max(tree[i],tree[i^1]);
	}
}

int query(int l, int r){
	--l;
	int m = INT_MIN;
	for(l = l + n, r = r + n; l < r; l = l >> 1, r = r >> 1){
		if(l&1)
			m = max(m, tree[l++]);
		if(r&1)
			m = max(m, tree[--r]);
	}
	return m;
}

bool f(int k){
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
	//freopen("in.txt","r",stdin);
	cin >> t;
	while(t--){
		cin >> n >> S;
		for(int i = 1; i <= n; ++i){
			cin >> p[i].first;
			a[i].second = i;
		}
		sort(p + 1, p + n + 1);
		int l = 0, h = n, ans = -1;
		while(l <= h){
			int mid = l + (h - l) >> 1;
			if(f(mid)){
				l = mid + 1;
				ans = mid;
			} 
			else 
				h = mid - 1;
		}
		cout << (ans + 1) << "\n";
	}
	return 0;
}