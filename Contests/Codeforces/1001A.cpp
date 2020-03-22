#include<bits/stdc++.h>
using namespace std;
int isvowel(char c){
	return (c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i');
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	int flag = 0;
	for(int i = 0; i < s.size() - 1; i++){
		if(isvowel(s[i]))
			continue;
		else{
			if(isvowel(s[i+1])){
				continue;
			}
			else if(s[i] == 'n')
				continue;
			else{
				flag = 1;
				break;
			}
		}
	}
	if(!flag && (isvowel(s[s.size() - 1]) || s[s.size() - 1] == 'n'))
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}