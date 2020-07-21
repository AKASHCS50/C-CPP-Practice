//        0 ---> 1
//        ^     /
//        |    /
//        |   /
//        -> ->   <---
//      S->2 --->3 -|

#include <bits/stdc++.h>

using namespace std;

class Graph
{
    int V;
    list<int> *adj;

public:
    Graph(int);
    void addEdge(int, int);
    void printGraph();
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::printGraph()
{
    int v;
    list<int>::iterator it;

    for (v = 0; v < this->V; v++)
    {
        printf("For vertex %d: ", v);
        for (it = adj[v].begin(); it != adj[v].end(); it++)
            printf("%d ", *it);
        printf("\n");
    }
}

int main()
{
    Graph g(4);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(0, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    g.printGraph();

    return 0;
}