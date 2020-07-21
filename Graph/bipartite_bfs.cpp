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
    bool bfsBipartite(int);
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


bool Graph::bfsBipartite(int s)
{
    queue<int> q;
    int color[V];

    memset(color, 0, sizeof(color));

    q.push(s);
    color[s] = -1;

    while(!q.empty())
    {
        s = q.front();
        q.pop();
        // printf("%d %d :\n", s, color[s]);
        for(auto it : adj[s])
        {
            // printf("        %d %d\n", it, color[it]);
            if(color[it] == 0)
            {
                color[it] = -color[s];
                q.push(it);
            }
            else
            {
                if((color[it] + color[s]) != 0)
                        return false;
            }
            // printf("        %d %d\n", it, color[it]);    
        }
    }

    return true;
}

int main()
{
    Graph g(6);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(5, 0);

    cout << g.bfsBipartite(0);

    return 0;
}