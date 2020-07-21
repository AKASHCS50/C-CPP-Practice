//        0 ---> 1
//        ^     /
//        |    /
//        |   /
//        -> ->   <---
//      S->2 --->3 -|



#include<bits/stdc++.h>

using namespace std;

class Graph
{
    int V;
    list<int> *adj;

    public:
        Graph(int);
        void addEdge(int, int);
        void dfs(int);
};


Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
}

void Graph::dfs(int s)
{
    int x;
    stack<int> st;
    bool visited[V];

    // memset(visited, false, sizeof(visited));

    for(int i = 0; i < V; i++)
        visited[i] = false;

    st.push(s);
    printf("DFS is ");


    while(!st.empty())
    {
        x = 0;
        s = st.top();
        if(!visited[s])
            printf("%d ", s);
        visited[s] = true;

        for(auto it : adj[s])
        {
            if(!visited[it])
            {
                st.push(it);
                x = 1;
                break;
            }
        }
        if(x == 0)
            st.pop();
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

    g.dfs(2);

    return 0;
}