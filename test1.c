#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        int i;
        for(i = 0; i < n; i++)
            scanf("%d",&arr[i]);
        int max_so_far = arr[0];
        int max_ending_here = arr[0];
        for(i = 1; i < n; i++){
            max_ending_here += arr[i];
            max_ending_here = (max_ending_here>arr[i])?max_ending_here:arr[i];
            max_so_far = (max_ending_here>max_so_far)?max_ending_here:max_so_far;
        }
        printf("%d",max_so_far);
    }
}
