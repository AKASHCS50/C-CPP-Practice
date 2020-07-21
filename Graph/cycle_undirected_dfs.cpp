#include <bits/stdc++.h>

using namespace std;

class Graph
{
    int V;
    list<int> *adj;
    bool dfsUtilCycle(int, bool[], int);

public:
    Graph(int);
    void addEdge(int, int);
    bool dfsUCycle();
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

bool Graph::dfsUtilCycle(int n, bool visited[], int parent)
{
    visited[n] = true;

    for (auto it : adj[n])
    {
        if (!visited[it])
        {
            if (dfsUtilCycle(it, visited, n))
                return true;
        }
        else if (it != parent)
            return true;
    }

    return false;
}

bool Graph::dfsUCycle()
{
    bool visited[V];

    memset(visited, false, sizeof(visited));

    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            if (dfsUtilCycle(i, visited, -1))
                return true;
        }
    }

    return false;
}

int main()
{
    Graph g1(5);
    g1.addEdge(1, 0);
    g1.addEdge(0, 2);
    g1.addEdge(2, 1);
    g1.addEdge(0, 3);
    g1.addEdge(3, 4);
    g1.dfsUCycle() ? cout << "Graph contains cycle\n" : cout << "Graph doesn't contain cycle\n";

    Graph g2(3);
    g2.addEdge(0, 1);
    g2.addEdge(1, 2);
    g2.dfsUCycle() ? cout << "Graph contains cycle\n" : cout << "Graph doesn't contain cycle\n";

    return 0;
}