#include <bits/stdc++.h>

using namespace std;

typedef struct node Node;

struct node{
    int vartex, cost;
};

struct cmp {
    bool operator()(const Node &a, const Node &b) const {
        return a.cost > b.cost;
    }
};

void dijkastra(vector<Node>adjList[], int source, int number_of_nodes)
{
    int dist[100];
    for(int i = 0; i < 100; i++) {
        dist[i] = INT_MAX;
    }

    priority_queue<Node, vector<Node>, cmp> pq;

    pq.push({source, 0});
    dist[source] = 0;

    while(!pq.empty()) {
        int u = pq.top().vartex;
        pq.pop();

        for(int i = 0; i < adjList[u].size(); i++) {
            Node adj_node = adjList[u][i];
            cout<<adj_node.vartex<<endl;

            if(dist[adj_node.vartex] > dist[u] + adj_node.cost) {
                dist[adj_node.vartex] = dist[u] + adj_node.cost;
                pq.push({adj_node.vartex, dist[u] + adj_node.cost});
            }
        }
    }
    for(int i = 2; i <= number_of_nodes; i++) {
        cout<<dist[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int number_of_nodes, number_of_edges;

    cin>>number_of_nodes>>number_of_edges;

    vector<Node>adjList[number_of_nodes + 1];

    for(int i = 0; i < number_of_edges; i++)
    {
        int u, v, cost;
        cin>>u>>v>>cost;
        adjList[u].push_back({v, cost});
        adjList[v].push_back({u, cost});
    }

    dijkastra(adjList, 1, number_of_nodes);

    return 0;
}
