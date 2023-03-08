#include <bits/stdc++.h>

using namespace std;

#define SIZE 300001

vector<int> adj_list[SIZE];
int sub_nodes[SIZE];
int visited[SIZE];

void dfs(int root)
{
    visited[root] = 1;
    sub_nodes[root] = 1;
    for (int i = 0; i < adj_list[root].size(); i++)
    {
        for (int i = 0; i < adj_list[root].size(); i++)
        {
            int nodes = adj_list[root][i];
            if (!visited[nodes])
            {
                dfs(nodes);
                sub_nodes[root] += sub_nodes[nodes];
                visited[nodes] = 1;
            }
        }
    }
}

int countSaveNodes(int root)
{
    visited[root] = 2;
    vector<int> temp_child;
    for (int i = 0; i < adj_list[root].size(); i++)
    {
        if (visited[adj_list[root][i]] != 2)
            temp_child.push_back(adj_list[root][i]);
    }
    if (temp_child.size() == 0)
        return 0;
    if (temp_child.size() == 1)
        return sub_nodes[temp_child[0]] - 1;
    int ans1 = sub_nodes[temp_child[0]] - 1;
    ans1 += countSaveNodes(temp_child[1]);
    int ans2 = sub_nodes[temp_child[1]] - 1;
    ans2 += countSaveNodes(temp_child[0]);
    return max(ans1, ans2);
}

int main()
{
    // freopen("D:\\c++\\cp\\input.txt", "r", stdin);
    // freopen("D:\\c++\\cp\\output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n, u, v, t;
    cin >> t;
    while (t--)
    {

        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            adj_list[i].clear();
            sub_nodes[i] = 0;
            visited[i] = 0;
        }
        for (int i = 1; i < n; i++)
        {
            cin >> u >> v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }
        dfs(1);
        cout << countSaveNodes(1) << endl;
    }
    return 0;
}