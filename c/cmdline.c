#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc,char* argv[]){
	int l;
	//sscanf(argv[1],"%d",&l);
	l = atoi(argv[1]);
	printf("%d",l);
	return 0;
}