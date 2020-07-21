#include<bits/stdc++.h>

using namespace std;

class Graph
{
    int V;
    vector<int> *adj;

    public:
        Graph(int);
        void addEdge(int, int);
        bool bfsUtilCycle(int, int[]);
        bool bfsUCycle();
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new vector<int>[V];
}

void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

bool Graph::bfsUtilCycle(int n, int visited[])
{
    queue<int> q;

    q.push(n);
    visited[n] = 0;

    while(!q.empty())
    {
        n = q.front();
        visited[n] = 1;
        q.pop();

        for(auto it : adj[n])
        {
            if(visited[it] == 0)
                return true;
            else if(visited[it] == -1)
            {
                visited[it] = 0;
                q.push(it);
            }
        }
    }

    return false;
}

bool Graph::bfsUCycle()
{
    int visited[V];

    memset(visited, -1, sizeof(visited));

    for(int i = 0; i < V; i++)
    {
        if(visited[i] == -1)
        {
            if(bfsUtilCycle(i, visited))
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
    g1.bfsUCycle() ? cout << "Graph contains cycle\n" : cout << "Graph doesn't contain cycle\n";

    Graph g2(3);
    g2.addEdge(0, 1);
    g2.addEdge(1, 2);
    g2.bfsUCycle() ? cout << "Graph contains cycle\n" : cout << "Graph doesn't contain cycle\n";

    return 0;
}