//author signature : puskardeb4

#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const ld PI = 3.141592653589793238462643383279;
const int N = (int)1e5 + 10;
const int MOD = (int)1e9 + 7;
const ll INF = (ll)1e18;

void print(ull mat[][2])
{
    for(int i = 0; i < 2; ++i)
    {
        for(int j = 0; j < 2; ++j)
        {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
}

void multiply(ull mat1[][2], ull mat2[][2], ull res[][2])
{
    for(int i = 0; i < 2; ++i)
    {
        for(int j = 0; j < 2; ++j)
        {
            res[i][j] = 0;
            for(int k = 0; k < 2; ++k)
            {
                res[i][j] = (res[i][j]%10 + (mat1[i][k]%10 * mat2[k][j]%10)%10)%10;
            }
        }
    }
}

void square(ull mat[][2], ull res[][2])
{
    multiply(mat, mat, res);
}

void assign(ull mat1[][2], ull mat2[][2])
{
    for(int i = 0; i < 2; ++i)
    {
        for(int j = 0; j < 2; ++j)
        {
            mat2[i][j] = mat1[i][j];
        }
    }
}

void fib_expo(ull n, ull mat[][2], ull res[][2])
{
    for(int i = 0; i < 2; ++i)
    {
        res[i][i] = 1;
    }

    ull temp[2][2] = {0};

    while(n > 0)
    {
        if(n&1)
        {
            multiply(res, mat, temp);
            assign(temp, res);
        }
        n /= 2;
        square(mat, temp);
        assign(temp, mat);
        
    }
}

ull fibo(ull n)
{
    ull res[2][2] = {0};
    ull mat[2][2] = {{1, 1}, {1, 0}};
    fib_expo(n, mat, res);

    return res[0][0]%10;
}

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

#ifdef ZICARD 
	freopen("in.txt","r",stdin);
    clock_t start = clock();
#endif

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll idx = 1;

        for(int i = 0; i < 64; ++i)
        {
            if((1ull << i) > n)
            {
                idx = 1ull << (i - 1);
                break;
            }
        }
        
        if(n == 1 || n == 2)
        {
            cout << n-1 << "\n";
        }
        else
        {
            cout << fibo(idx - 2) << "\n";
        }
    }

#ifdef ZICARD 
    cerr << "Time elapsed : " << 1.0 * (clock() - start)/CLOCKS_PER_SEC << "s\n";
#endif
    
	return 0;
}
