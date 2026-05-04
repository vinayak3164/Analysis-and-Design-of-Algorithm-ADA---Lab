
#include <iostream>
using namespace std;
void multiply(int A[][10], int B[][10], int C[][10],
              int n, int m, int p, int i, int j, int k)
{
    if (i >= n)
        return;
    if (j < p)
    {
        if (k < m)
        {
            C[i][j] += A[i][k] * B[k][j];
            multiply(A, B, C, n, m, p, i, j, k + 1);
        }
        else
        {
            multiply(A, B, C, n, m, p, i, j + 1, 0);
        }
    }
    else
    {
        multiply(A, B, C, n, m, p, i + 1, 0, 0);
    }
}

int main()
{
    int n, m, p;

    cout << "Enter rows and columns of first matrix: ";
    cin >> n >> m;

    cout << "Enter columns of second matrix: ";
    cin >> p;

    int A[10][10], B[10][10], C[10][10] = {0};

    cout << "Enter first matrix:
";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> A[i][j];

    cout << "Enter second matrix:
";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            cin >> B[i][j];

    multiply(A, B, C, n, m, p, 0, 0, 0);

    cout << "Result matrix:
";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
