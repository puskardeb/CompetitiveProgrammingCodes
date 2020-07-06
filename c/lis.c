#include <stdio.h>
int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int i,j,n;
		scanf("%d",&n);
		if(n == 0){
			printf("0");
			return 0;
		}
		int a[n];
		for(i = 0; i < n; i++)
			scanf("%d",&a[i]);
		int lis[n];
		for(i = 0; i < n; i++)
			lis[i] = 1;
		for(i = 1; i < n; i++){
			for(j = 0; j < i; j++){
				if(a[i]>a[j] && lis[i] < lis[j]+1)
					lis[i] = lis[j]+1;
			}
		}
		int max = lis[0];
		for(i = 1; i < n; i++){
			if(max < lis[i])
				max = lis[i];
		}
		printf("%d\n",max);
	}
	return 0;
}