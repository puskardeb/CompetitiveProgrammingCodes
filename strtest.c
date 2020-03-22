#include <stdio.h>
#include <string.h>

int main(){
	char str[] = "Hello,World";
	str[4] = '1';
	printf("%c\n", str[(int)strlen(str)-1]);
	return 0;
}