#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("in.txt","r",stdin);
	int n;
	cin >> n;
	int temp;
	if(n == 1){
		cin >> temp;
		cout<< "-1" <<"\n";
	}
	else{
		int ar[n];
		for(int i = 0; i < n; i++){
			cin >> ar[i];
		}
		int min = ar[0], idx = 0;
		for(int i = 1; i < n ; i++){
			if(ar[i] < min){
				min = ar[i];
				idx = i;
			}
		}
		int sum = 0;
		for(int i = 0; i < n; i++){
			if(i != idx){
				sum += ar[i];
			}
		}
		if(sum != min){
			cout << "1" <<"\n";
			cout << idx + 1 <<"\n";
		}
		else
			cout<<"-1"<<"\n";
	}
	return 0;
}