#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("grid.txt");
    int n = 20, m = 20;
    int k = 4;
    int g[n][m];

    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < m; y++)
        {
            input >> g[x][y];
        }
    }

    long long maxProduct = 0;
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < m; y++)
        {
            // Down
            if (x <= m - k)
            {
                long long product = 1;
                for (int i = 0; i < k; i++)
                    product *= g[x+i][y];

                if (product > maxProduct)
                    maxProduct = product;
            }

            // Right
            if (y <= n - k)
            {
                long long product = 1;
                for (int i = 0; i < k; i++)
                    product *= g[x][y+i];

                if (product > maxProduct)
                    maxProduct = product;
            }

            // Diagonal Right
            if (y <= n - k && x <= m - k)
            {
                long long product = 1;
                for (int i = 0; i < k; i++)
                    product *= g[x+i][y+i];

                if (product > maxProduct)
                    maxProduct = product;
            }

            // Diagonal Left
            if (y >= k-1 && x <= m - k)
            {
                long long product = 1;
                for (int i = 0; i < k; i++)
                    product *= g[x+i][y-i];

                if (product > maxProduct)
                    maxProduct = product;
            }
        }
    }

    cout << maxProduct << endl;
}
