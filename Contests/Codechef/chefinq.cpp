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

ll combination(int n, int r)
{
	ll C[n+1][r+1];

	for(int i = 0; i <= n; ++i)
	{
		for(int j = 0; j <= min(r, i); ++j)
		{
			if(j == 0 || j == i)
			{
				C[i][j] = 1L;
			}
			else
			{
				C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
			}
		}
	}

	return C[n][r];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

#ifdef ZICARD 
	freopen("in.txt","r",stdin);
#endif

    int t;
    cin >> t;
    while(t--)
    {
    	int n, k;
    	cin >> n >> k;
    	vector<int> v(n);
    	for(int &a : v)
    	{
    		cin >> a;
    	}
    	sort(v.begin(), v.end());
    	int max_elem = *max_element(v.begin(), v.end());

    	int freq[2][max_elem + 1];

    	for(int i = 0; i < 2; ++i)
    	{
    		for(int j = 0; j <= max_elem; ++j)
    		{
    			freq[i][j] = 0;
    		}
    	}

    	for(int i = 0; i < k; ++i)
    	{
    		++freq[0][v[i]];
    	}

    	for(int i : v)
    	{
    		if(freq[0][i])
    		{
    			++freq[1][i];
    		}
    	}

    	ll ans = 1L;
    	for(int i = 0; i <= max_elem; ++i)
    	{
	        if(freq[0][i])
	        {
	            ans = ans * combination(freq[1][i], freq[0][i]);
	        }
    	}

    	cout << ans << "\n";
    }

#ifdef ZICARD 
    cerr << "Time elapsed : " << 1.0 * clock()/CLOCKS_PER_SEC << "s\n";
#endif
    
	return 0;
}
