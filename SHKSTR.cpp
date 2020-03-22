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

struct Node{
	int node[26];
	int finish;
}trie[1 << 20];

int ptr, n, q, r;
string s[N], ans[N], temp;
vector<pair<int, string>> v[N];

void add_string(const string &s){
	int root = 0;
	for(auto &ch : s){
		if(!(trie[root].node[ch - 'a']))
			trie[root].node[ch - 'a'] = ++ptr;
		root = trie[root].node[ch - 'a'];
	}
	trie[root].finish = 1;
}

string LCP(const string &s){
	string res;
	int root = 0;
	for(auto &ch : s){
		if(!(trie[root].node[ch - 'a']))
			break;
		res += ch;
		root = trie[root].node[ch - 'a'];
	}
	while(!trie[root].finish){
		for(int i = 0; i < 26; i++){
			if(trie[root].node[i]){
				res += (char)(i + 'a');
				root = trie[root].node[i];
				break;
			}
		}
	}
	return res;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);	cout.tie(nullptr);
	//freopen("in.txt","r",stdin);
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> s[i];
	cin >> q;
	for(int i = 0; i < q; i++){
		cin >> r >> temp;
		v[r-1].pb(mp(i, temp));
	}
	for(int i = 0; i < n; i++){
		add_string(s[i]);
		//cerr << "string not added!\n";
		for(auto &x : v[i]){
			ans[x.first] = LCP(x.second);
		}
	}
	for(int i = 0; i < q; i++)
		cout << ans[i] << "\n";
	return 0;
}