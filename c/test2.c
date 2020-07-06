#include <stdio.h>
int main(int argc, char **argv){
	char **items;
	int j = 3, i;
	items = argv;
	for(i = 1; (i%4); i++){
		int **p = &items[j];
		printf("%c", **p);
		j--;
	}
	return 0;
}