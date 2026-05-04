#include <iostream>
using namespace std;
#define INF 100000
int main() {
    int n;
    cout << "Enter number of vertices: ";
    cin >> n;
    int cost[n][n];
    cout << "Enter cost matrix (use 0 if no edge):\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> cost[i][j];
            if(cost[i][j] == 0 && i != j)
                cost[i][j] = INF;
        }
    }

    int dist[n], path[n];
    dist[n-1] = 0;
    for(int i = n-2; i >= 0; i--) {
        dist[i] = INF;
        for(int j = i+1; j < n; j++) {
            if(cost[i][j] != INF) {
                if(cost[i][j] + dist[j] < dist[i]) {
                    dist[i] = cost[i][j] + dist[j];
                    path[i] = j;
                }
            }
        }
    }
    cout << "Minimum cost from source to destination: " << dist[0] << endl;
    cout << "Path: ";
    int i = 0;
    while(i < n-1) {
        cout << i << " -> ";
        i = path[i];
    }
    cout << n-1 << endl;
    return 0;
}
