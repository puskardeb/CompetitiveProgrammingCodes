#include <stdio.h>
int arr[100000];
int recur(int i, int sum){
	if(sum == 0)	return 1;
	if(sum < 0)	return 0;
	if (i <= 0)	return 0;
	return recur(i + 1, sum) + recur(i, sum - arr[i]);

}
int main()
{
	int i;
	for(i = 0; i < 4; i++)
		scanf("%d",&arr[i]);
	int sum = 25;
	printf("%d\n", recur(1, sum));
	return 0;
}