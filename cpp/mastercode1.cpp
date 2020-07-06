#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
typedef long long ll;
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	string l = "0012";
	do{
		cout << l << "\n";
	}while(next_permutation(l.begin(), l.end()));
	return 0;
}