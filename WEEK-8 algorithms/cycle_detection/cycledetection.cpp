#include <iostream>
#include <vector>
using namespace std;
bool dfs(int v, vector<vector<int>>&graph, vector<bool>&visited, vector<bool>&recStack) {
    visited[v] = true;
    recStack[v] = true;

    for (int u : graph[v]) {
        if (!visited[u] && dfs(u, graph, visited, recStack))
            return true;
        else if (recStack[u])
            return true;
    }

    recStack[v] = false;
    return false;
}

int main() {
    int n, e;
    cout << "Enter number of vertices and edges: ";
    cin >> n >> e;

    vector<vector<int>> graph(n);

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }

    vector<bool> visited(n, false), recStack(n, false);

    bool hasCycle = false;

    for (int i = 0; i < n; i++) {
        if (!visited[i] && dfs(i, graph, visited, recStack)) {
            hasCycle = true;
            break;
        }
    }

    if (hasCycle)
        cout << "Cycle exists in graph";
    else
        cout << "No cycle found";

    return 0;
}
