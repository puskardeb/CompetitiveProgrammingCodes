#include <stdio.h>
#include <limits.h>
void main(){
	static int i=INT_MAX;
	for(i++;++i;i++)
		printf("%d\n", i);
}