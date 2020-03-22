#include <bits/stdc++.h>
using namespace  std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, x;
	cin >> a >> b >> x;
	int n = a + b;
	int arr[n];
	for(int i = 0; i < a; i++)
		arr[i] = 0;
	for(int i = a; i < n; i++)
		arr[i] = 1;
	do{
		int c = 0;
		for(int i =1; i < n; i++){
			if(arr[i] != arr[i-1])
				c++;
		}
		if(c == x)
			break;
	}while(next_permutation(arr, arr + n));
	for(int i = 0; i < n; i++)
		cout << arr[i];
	cout << "\n"; 
	return 0;
}
	
