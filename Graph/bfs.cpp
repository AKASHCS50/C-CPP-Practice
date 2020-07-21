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
    void bfs(int);
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

// O(V + E)
void Graph::bfs(int s)
{
    int u;
    bool isVisited[V];
    for (int i = 0; i < V; i++)
        isVisited[i] = false;

    queue<int> q;
    list<int>::iterator it;
    q.push(s);
    isVisited[s] = true;

    printf("The BFS is ");

    while (!q.empty())
    {
        u = q.front();
        printf("%d ", u);
        q.pop();
        for (it = adj[u].begin(); it != adj[u].end(); it++)
        {
            if (!isVisited[*it])
            {
                q.push(*it);
                isVisited[*it] = true;
            }     
        }
    }
    printf("\n");
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

    g.bfs(2);

    return 0;
}