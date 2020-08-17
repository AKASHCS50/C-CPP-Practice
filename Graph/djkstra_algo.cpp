#include<bits/stdc++.h>

using namespace std;

class Graph
{
    int V;
    list<pair<int, int>> *adj;

public:
    Graph(int);
    void addEdge(int, int, int);
    void djkstraShortestpath(int);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<pair<int, int>>[V];
}

void Graph::addEdge(int u, int v, int w)
{
    adj[u].push_back(make_pair(v, w));
}

void Graph::djkstraShortestpath(int s)
{
    priority_queue<pair<int, int>,vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(V, INT_MAX);

    dist[s] = 0;
    pq.push(make_pair(0, s));

    while(!pq.empty())
    {

        int u = pq.top().second;
        pq.pop();

        for(auto it : adj[u])
        {
            if(dist[it.first] > dist[u] + it.second)
            {
                dist[it.first] = dist[u ] + it.second;
                pq.push(make_pair(dist[it.first], it.first));
            }
        }
    }

    for(int i = 0; i < V; i++)
    {
        printf("%d : %d\n", i, dist[i]);
    }
}

int main()
{
    Graph g(9);

    g.addEdge(0, 1, 4); 
    g.addEdge(0, 7, 8); 
    g.addEdge(1, 2, 8); 
    g.addEdge(1, 7, 11); 
    g.addEdge(2, 3, 7); 
    g.addEdge(2, 8, 2); 
    g.addEdge(2, 5, 4); 
    g.addEdge(3, 4, 9); 
    g.addEdge(3, 5, 14); 
    g.addEdge(4, 5, 10); 
    g.addEdge(5, 6, 2); 
    g.addEdge(6, 7, 1); 
    g.addEdge(6, 8, 6); 
    g.addEdge(7, 8, 7); 

    g.djkstraShortestpath(0); 

    return 0;
}