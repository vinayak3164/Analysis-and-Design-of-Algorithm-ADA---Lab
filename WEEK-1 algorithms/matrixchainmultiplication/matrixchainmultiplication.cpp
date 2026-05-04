#include <bits/stdc++.h>
#include <vector>
using namespace std;
int n = 5;
vector<vector<int>> m(n + 1, vector<int>(n + 1, INT_MAX));
vector<vector<int>> s(n + 1, vector<int>(n + 1, INT_MAX));
void matrixchainmultiplication(int n, vector<int> p)
{
    for (int i = 1; i <= n; i++)
    {
        m[i][i] = 0;
    }

    for (int length = 2; length <= n; length++)
    {
        for (int i = 1; i <= n - length + 1; i++)
        {
            int j = i + length - 1;

            for (int k = i; k < j; k++)
            {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j])
                {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
}

// string optimulsolution(vector<vector<int>> s, int i, int j)
// {
//     if (i == j)
//     {
//         cout << "A[" << i << "]";
//     }
//     else
//     {
//         cout << "(";
//         optimulsolution(s, i, s[i, j])
//     }
// }

int main()
{
    int n = 5;
    vector<int> p = {2, 4, 2, 5, 6, 2};

    // for(int i=0;i<=n;i++)
    // {
    //     cout<<"enter the value of p ["<<i<<"]  :::";
    //     cin>>p[i];
    // }

    matrixchainmultiplication(n, p);

    // cout<<m[1][5];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << s[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}