#include <bits/stdc++.h>
#define N 1000001
using namespace std;
int a[N];
void sieve(){
	for(int i = 0; i < N; i++)
		a[i] = 1;
	a[0] = 0;
	a[1] = 0;
	for(int i = 2; i*i < N; i++){
		if(a[i]){
			for(int j = 2; i*j < N; j++){
				a[i*j] = 0;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("in.txt","r",stdin);
	clock_t t;
	t = clock();
	int n;
	cin >> n;
	sieve();
	while(n--){
		long num;
		cin >> num;
		double temp = sqrt(num);
		if(!(temp - floor(temp))){
			if(a[(int)temp])
				cout<<"YES"<<"\n";
			else
				cout<<"NO"<<"\n";
		}else{
			cout<<"NO"<<"\n";
		}
	}
	t = clock() - t;
	double time = ((double)t)/CLOCKS_PER_SEC;
	//printf("%f\n", time);
	return 0;
}