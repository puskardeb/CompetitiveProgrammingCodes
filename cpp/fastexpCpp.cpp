#include<bits/stdc++.h>
using namespace  std;

long long recur(int a,int b){
	long long res;
	if(b==0)	return 1;
	else{
		res=recur(a,b/2);
		if(b%2==0)	return res*res;
		else	return res*res*a;
	}
	return res;
}
int main()
{
	/* code */
	int a=2,b=10;
	long long ans = recur(a, b);
	cout << ans << "\n";
	return 0;
}
