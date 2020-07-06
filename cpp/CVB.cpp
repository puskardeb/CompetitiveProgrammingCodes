#include <bits/stdc++.h>
#define pb insert
#define mp make_pair

typedef long long ll;
using namespace std;


int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("in.txt","r", stdin);
	int m, n;
	cin >> m >> n;
	int x, y;
	cin >> x >> y;
	char ch[m][n];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> ch[i][j];
		}
	}

	queue<pair<int, int>> q;
	int burnt[m][n];
	memset(burnt, 0, sizeof(burnt));
	//int c = 0;
	--x;
	--y;
	burnt[x][y] = 1;
	q.push(mp(x, y));
	pair<int, int> temp;
	int a, b;
	set<pair<int, int>> neighbours;
	while(!q.empty()){
		temp = q.front();
		q.pop();
		if(!temp.first){
			if(!temp.second){
				if(ch[temp.first+1][temp.second+1] == 'T')
					neighbours.pb(mp(temp.first+1, temp.second+1));
				if(ch[temp.first][temp.second+1] == 'T')
					neighbours.pb(mp(temp.first, temp.second+1));
				if(ch[temp.first+1][temp.second] == 'T')
					neighbours.pb(mp(temp.first+1, temp.second));

			}else if(temp.second == n-1){
				if(ch[temp.first+1][temp.second-1] == 'T')
					neighbours.pb(mp(temp.first+1, temp.second-1));
				if(ch[temp.first][temp.second-1] == 'T')
					neighbours.pb(mp(temp.first, temp.second-1));
				if(ch[temp.first+1][temp.second] == 'T')
					neighbours.pb(mp(temp.first+1, temp.second));
			}else{
				if(ch[temp.first+1][temp.second-1] == 'T')
					neighbours.pb(mp(temp.first+1, temp.second-1));
				if(ch[temp.first][temp.second-1] == 'T')
					neighbours.pb(mp(temp.first, temp.second-1));
				if(ch[temp.first+1][temp.second+1] == 'T')
					neighbours.pb(mp(temp.first+1, temp.second+1));
				if(ch[temp.first][temp.second+1] == 'T')
					neighbours.pb(mp(temp.first, temp.second+1));
				if(ch[temp.first+1][temp.second] == 'T')
					neighbours.pb(mp(temp.first+1, temp.second));
			}
		}else if(temp.first == m-1){
			if(!temp.second){
				if(ch[temp.first-1][temp.second+1] == 'T')
					neighbours.pb(mp(temp.first-1, temp.second+1));
				if(ch[temp.first][temp.second+1] == 'T')
					neighbours.pb(mp(temp.first, temp.second+1));
				if(ch[temp.first-1][temp.second] == 'T')
					neighbours.pb(mp(temp.first-1, temp.second));
			}else if(temp.second == n-1){
				if(ch[temp.first-1][temp.second-1] == 'T')
					neighbours.pb(mp(temp.first-1, temp.second-1));
				if(ch[temp.first][temp.second-1] == 'T')
					neighbours.pb(mp(temp.first, temp.second-1));
				if(ch[temp.first-1][temp.second] == 'T')
					neighbours.pb(mp(temp.first-1, temp.second));
			}else{
				if(ch[temp.first-1][temp.second+1] == 'T')
					neighbours.pb(mp(temp.first-1, temp.second+1));
				if(ch[temp.first][temp.second-1] == 'T')
					neighbours.pb(mp(temp.first, temp.second-1));
				if(ch[temp.first-1][temp.second-1] == 'T')
					neighbours.pb(mp(temp.first-1, temp.second-1));
				if(ch[temp.first][temp.second+1] == 'T')
					neighbours.pb(mp(temp.first, temp.second+1));
				if(ch[temp.first-1][temp.second] == 'T')
					neighbours.pb(mp(temp.first-1, temp.second));
			}

		}else{
			if(!temp.second){
				if(ch[temp.first+1][temp.second+1] == 'T')
					neighbours.pb(mp(temp.first+1, temp.second+1));
				if(ch[temp.first-1][temp.second+1] == 'T')
					neighbours.pb(mp(temp.first-1, temp.second+1));
				if(ch[temp.first][temp.second+1] == 'T')
					neighbours.pb(mp(temp.first, temp.second+1));
				if(ch[temp.first+1][temp.second] == 'T')
					neighbours.pb(mp(temp.first+1, temp.second));
				if(ch[temp.first-1][temp.second] == 'T')
					neighbours.pb(mp(temp.first-1, temp.second));

			}else if(temp.second == n-1){
				if(ch[temp.first+1][temp.second-1] == 'T')
					neighbours.pb(mp(temp.first+1, temp.second-1));
				if(ch[temp.first-1][temp.second-1] == 'T')
					neighbours.pb(mp(temp.first-1, temp.second-1));
				if(ch[temp.first][temp.second-1] == 'T')
					neighbours.pb(mp(temp.first, temp.second-1));
				if(ch[temp.first+1][temp.second] == 'T')
					neighbours.pb(mp(temp.first+1, temp.second));
				if(ch[temp.first-1][temp.second] == 'T')
					neighbours.pb(mp(temp.first-1, temp.second));
			}else{
				if(ch[temp.first+1][temp.second-1] == 'T')
					neighbours.pb(mp(temp.first+1, temp.second-1));
				if(ch[temp.first][temp.second-1] == 'T')
					neighbours.pb(mp(temp.first, temp.second-1));
				if(ch[temp.first+1][temp.second+1] == 'T')
					neighbours.pb(mp(temp.first+1, temp.second+1));
				if(ch[temp.first][temp.second+1] == 'T')
					neighbours.pb(mp(temp.first, temp.second+1));
				if(ch[temp.first-1][temp.second+1] == 'T')
					neighbours.pb(mp(temp.first-1, temp.second+1));
				if(ch[temp.first-1][temp.second-1] == 'T')
					neighbours.pb(mp(temp.first-1, temp.second-1));
				if(ch[temp.first+1][temp.second] == 'T')
					neighbours.pb(mp(temp.first+1, temp.second));
				if(ch[temp.first-1][temp.second] == 'T')
					neighbours.pb(mp(temp.first-1, temp.second));
			}
		}
		for(auto ng : neighbours){
			if(!burnt[ng.first][ng.second]){
				q.push(ng);
				burnt[ng.first][ng.second] = 1;
				//c++;
			}
		}
		//neighbours.clear();
	}
	cout << neighbours.size() << "\n";
	neighbours.clear();
	return 0;
}