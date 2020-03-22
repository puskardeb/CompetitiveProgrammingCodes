#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//resource : https://math.stackexchange.com/questions/1264613/how-many-bit-strings-of-length-n-are-palindromes
	//freopen("in.txt","r",stdin);
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << 1 << " " << 1;
		if(!(n&1))
			n = n >> 1;
		else
			n = (n - 1) >> 1;
		for(int i = 0; i < n; i++)
			cout << 0;
		cout << "\n";
	}
}
