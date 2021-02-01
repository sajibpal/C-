#include<iostream>
#include <list>
#include <limits.h>
using namespace std;


class loop
{
	int V;
	list<int> *adj;
	bool cyclicU(int v, bool visited[], int parent) {
	visited[v] = true;

	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
	{
		if (!visited[*i])
		{
		if (cyclicU(*i, visited, v))
			return true;
		}

		else if (*i != parent)
		return true;
	}
	return false;
	}

 public:
	loop(int V){

	  this->V = V;
	  adj = new list<int>[V];

	}
	void Edge(int v, int w){

	 adj[v].push_back(w);
	 adj[w].push_back(v);

	}
	bool cyclic(){

	bool *visited = new bool[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;

	for (int u = 0; u < V; u++)
		if (!visited[u])
		if (cyclicU(u, visited, -1))
			return true;

	return false;
	}
};


int main()
{
	loop g1(5);
	g1.Edge(4, 0);
	g1.Edge(0, 3);
	g1.Edge(3, 0);
	g1.Edge(0, 2);
	g1.Edge(2, 4);
	if(g1.cyclic()){

	 cout << "Graph contains cycle\n";

	}
	else{

     cout << "Graph doesn't contain cycle\n";
	}

	return 0;
}
