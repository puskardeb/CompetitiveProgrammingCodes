#include <bits/stdc++.h>
using namespace std;
struct Node{
	int node[26];
	int finish;
}trie[1 << 20];
int ptr;
void add_string(string &s){
	int root = 0;
	for(auto ch : s){
		if(!(trie[root].node[ch - 'a']))
			trie[root].node[ch - 'a'] = ++ptr;
		root = trie[root].node[ch - 'a'];
	}
	trie[root].finish = 1;
}
string LCP(string &s){
	int root = 0;
	string res;
	for(auto ch : s){
		if(!(trie[root].node[ch - 'a']))
			break;
		res += (char)ch;
		root = trie[root].node[ch - 'a'];
	}
	return res;
}
int main(){
	string s;
	for(int i = 0; i < 5; i++){
		cin >> s;
		add_string(s);
	}
	cout << LCP("hey") << "\n";
}