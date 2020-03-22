#include <iostream>
#include <ctime>
#include <cstdlib>

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
    swap(a[i], a[p]);
    return i;
}

int random_partition(int *a, int p, int q)
{
    srand(time(NULL));
    int mid = p + rand()%(q - p);
    swap(a[mid], a[p]);
    return partition(a, p, q);
}

void quick_sort(int *a, int p, int q)
{
    if(p == q)  return;
    int r = random_partition(a, p, q);
    quick_sort(a, p, r);
    quick_sort(a, r+1, q);
}

void print(int *a, int n)
{
    for(int i = 0; i < n; ++i)
    {
        std::cout << a[i] << "\t";
    }
    std::cout << std::endl;
}

int main()
{
    int a[] = {3,0,2,1,10};
    int n = sizeof(a)/sizeof(*a);
    print(a, n);
    quick_sort(a, 0, n);
    print(a, n);
    return 0;
}
