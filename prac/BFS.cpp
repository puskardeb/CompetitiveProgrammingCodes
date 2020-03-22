#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>

void addEdge(std::vector<int> vec[], int start, int end)
{
	vec[start].push_back(end);
	vec[end].push_back(start);
}

int main()
{
	int n, e, start;
	std::cout << "Enter total number of nodes and edges : ";
	std::cin >> n >> e;
	std::cout << std::endl;
	std::vector<int> vec[n];
	
	//add edges to make a graph
	for(int i = 0; i < e; ++i)
	{
		int a, b;
		std::cin >> a >> b;
		addEdge(vec, a, b);
	}

	std::queue<int> q;
	bool visited[n];

	memset(visited, 0, sizeof(visited));

	//BFS
	std::cout << "Enter the node from where the BFS will start : ";
	std::cin >> start;
	std::cout << std::endl;

	visited[start] = 1;
	q.push(start);

	while(!q.empty())
	{
		int front = q.front();
		q.pop();

		std::cout << front << "\t";

		for(auto itr = vec[front].begin(); itr != vec[front].end(); ++itr)
		{
			if(!visited[*itr])
			{
				visited[*itr] = 1;
				q.push(*itr);
			}
		}
	}

	return 0;
}