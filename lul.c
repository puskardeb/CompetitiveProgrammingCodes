#include<stdio.h>

int f(int);

int main()
{
    printf("%d\n", f(6));
}

int f(int a)
{
    return (a << 1);
}
