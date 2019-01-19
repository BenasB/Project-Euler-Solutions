#include <iostream>
#include <queue>

using namespace std;

typedef pair<int, int> pii;
typedef queue<pii> qii;

// NOT FAST ENOUGH

long long lattice(int n)
{
    long long grid[n+1][n+1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            grid[i][j] = 1;
        }
    }

    for (int i = n-1; i >= 0; i--)
    {
        for(int j = n-1; j >= 0; j--)
        {
            grid[i][j] = grid[i+1][j] + grid[i][j+1];
        }
    }

    return grid[0][0];
}

int main()
{
    cout << lattice(20) << endl;
}
