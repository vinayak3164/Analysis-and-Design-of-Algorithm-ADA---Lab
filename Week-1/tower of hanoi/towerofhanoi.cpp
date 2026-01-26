#include <iostream>
#include <cmath>
using namespace std;
int moves;
void towerofhanoi(int n, char F, char U, char T)
{
    if (n == 1)
    {
        // cout << "transfer disk " << n << " from " << F << " to " << T;
        moves++;
        return;
    }
    towerofhanoi(n - 1, F, T, U);
    // cout << "transfer disk " << n << " from " << F << " to " << T;
    moves++;
    towerofhanoi(n - 1, U, F, T);
}

int main()
{
cout << " Moves\n";
    for (int n = 1; n <= 45; n += 3)
    {
        moves = 0;
        towerofhanoi(n, 'A', 'B', 'C');
        cout << n << "    " << moves << endl;
    }
}