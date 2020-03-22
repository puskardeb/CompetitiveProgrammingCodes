#include <stdio.h>
#include <string.h>
int main()
{
	/* code */
	int i, n, t;
	scanf("%d%d",&n,&t);
	char a[n+1];
	scanf("%s",a);
	for(i = 0; i < n - 1; i++){
		for(; t > 0; t--){
			if(a[i] == 'G' && a[i + 1] == 'B'){
				char temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}

	for(i = 0; i < n; i++)
		printf("%c", a[i]);
	return 0;
}