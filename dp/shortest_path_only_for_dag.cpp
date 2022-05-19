#include <bits/stdc++.h>

#define MAX_NODE 100
#define INF 1000000
using namespace std;

int adjList[MAX_NODE][MAX_NODE];
int shortest_path[MAX_NODE];

int dpForShortestPath(int u, int n) {

    if(u == n - 1) return 0;
    if(shortest_path[u] != -1) return shortest_path[u];
    int ans = INF;
    for(int v = 0; v < n; v++) {
        if(adjList[u][v]) ans = min(ans, dpForShortestPath(v, n) + adjList[u][v]);
    }
    shortest_path[u] = ans;
    return shortest_path[u];
}

int main() {
    memset(shortest_path, -1, MAX_NODE);
    adjList[0][1] = 2;
    adjList[0][3] = 1;
    adjList[1][2] = 1;
    adjList[1][4] = 9;
    adjList[2][4] = 3;
    adjList[3][1] = 3;

    cout<<dpForShortestPath(0, 5);
    return 0;
}