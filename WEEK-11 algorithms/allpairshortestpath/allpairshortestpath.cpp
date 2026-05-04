#include <bits/stdc++.h>
#include <vector>
using namespace std;

void allpair(vector<vector<int>> c, int n)
{

    vector<vector<int>> cost(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cost[i][j] = c[i][j];
        }
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int q = cost[i][k] + cost[k][j];
                if (q < cost[i][j])
                {
                    cost[i][j] = q;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << cost[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n = 3;
    vector<vector<int>> c(n, vector<int>(n, INT16_MAX));
    c[0][1] = 4;
    c[1][0] = 6;
    c[0][2] = 11;
    c[1][2] = 2;
    c[2][0] = 3;
    for (int i = 0; i < n; i++)
    {
        c[i][i] = 0;
    }
    allpair(c, n);
    int i, j;
    cout << "PATH PRINTING ::: ";
    cout << "enter the source node :";
    cin >> i;
    cout << "enter the destination node :";
    cin >> j;
    return 0;
}