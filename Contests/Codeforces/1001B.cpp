#include <bits/stdc++.h>
#define N 3001
typedef long long ll;
using namespace std;

vector<int> v[N];
int visited[N];
int n, temp;
queue<int> q;

void add(int a, int b){
	v[a].push_back(b);
	v[b].push_back(a);
}

void BFS(int s){
	memset(visited, 0, sizeof(visited));
	visited[s] = 1;
	q.push(s);
	while(!q.empty()){
		temp = q.front();
		cout << temp << "\t";
		q.pop();
		for(auto i : v[temp]){
			if(!visited[i]){
				visited[i] = 1;
				q.push(i);
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	add(1,2);
	add(1,3);
	add(1,4);
	add(2,3);
	add(4,8);
	add(4,5);
	add(5,6);
	add(5,7);
	add(6,8);
	add(6,7);
	add(6,9);
	add(8,9);
	add(9,10);
	BFS(1);
	return 0;
}