#include <iostream>
#include <cstdlib>
#include <ctime>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int *a, int p, int q)
{
    int key = a[p];
    int i = p;

    for(int j = p+1; j < q; ++j)
    {
        if(a[j] < key)
        {
            ++i;
            swap(a[j], a[i]);
        }
    }
    swap(a[p], a[i]);
    return i;
}

int select(int *a, int p, int q, int i)
{
    if(p == q)  return a[p];
    int r = partition(a, p, q);
    int k = r - p + 1;
    if(i == k)  return a[r];
    if(i < k)   return select(a, p, r-1, i);
    else    return select(a, r+1, q, i-k);
}

int main()
{
    int a[] = {9,0,7,8,77};
    int n = 5;

    std::cout << select(a, 0, n, 3) << std::endl;
    return 0;
}
