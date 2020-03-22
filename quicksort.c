#include<stdio.h>


int partition(int l, int r, int *a){
	int i = l - 1;
	int pivot = a[r];
	int j = l;
	for(; j < r; j++){
		if(pivot >= a[j]){
			++i;
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	int temp = a[i + 1];
	a[i + 1] = a[r];
	a[r] = temp;
	return i + 1;
}

void quicksort(int l, int r, int *a){
	if(l < r){
		int mid = partition(l, r, a);
		quicksort(l , mid - 1, a);
		quicksort(mid + 1, r, a);
	}
}

int main(){
	int a[] = {2,4,58,5,83};
	quicksort(0, 4, a);
	for(int i = 0; i < 5; i++)
		printf("%d ",a[i]);
	return 0;
}