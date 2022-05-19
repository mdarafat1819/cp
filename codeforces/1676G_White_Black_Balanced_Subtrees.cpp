#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int white, black;
        Node() {
            white = 0;
            black = 0;
        }
};

class Graph {
    public:
    vector<int>adjList[4001];
    bool visited[4001];
    Node colored_node[4001];
     int ans;
    int n;
    Graph() {
        memset(visited, 0, sizeof(bool) * 4001);
        ans = 0;
    }
    void input() {
        int node;
        cin>>n;
        for(int i = 1; i < n; i++) {
            cin>>node;
            adjList[node].push_back(i + 1);
        }
    }
    void setColorValue() {
        string colors;
        cin>>colors;
        int len = colors.length();
        for(int i = 0; i < len; i++) {
            if(colors[i] == 'B')
            colored_node[i+1].black = 1;
            else colored_node[i+1].white = 1;
        }
    }
    void dfs(int source) {
        visited[source] = 1;
        int len = adjList[source].size();
        for(int i = 0; i < len; i++) {
            if(!visited[adjList[source][i]]) {
                int v = adjList[source][i];
                dfs(v);
                colored_node[source].white += colored_node[v].white;
                colored_node[source].black += colored_node[v].black;
            }
        }
        
    }
   
    void printAns() {
        for(int i = 1; i <= n; i++) {
            if(colored_node[i].white == colored_node[i].black) ans++;
        }
        cout<<ans<<endl;
    }
};

void solve()
{
   Graph g;

   g.input();
   g.setColorValue();
   g.dfs(1);
   g.printAns();

}

int main()
{
    //freopen("D:\\c++\\cp\\input.txt", "r", stdin);
    //freopen("D:\\c++\\cp\\output.txt", "w", stdout);

    int t; cin>>t; while(t--)
    //int t, cs = 1; cin>>t; while(cs <= t) cout<<"Case "<<cs<<": ", cs++,
    solve();

    return 0;
}