#include<stdio.h>
long recur(int a,int b){
	long res;
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
	int a=2,b=100000;
	printf("%ld",recur(a,b));
	return 0;
}
