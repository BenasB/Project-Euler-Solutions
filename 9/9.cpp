#include <iostream>

using namespace std;

int main()
{
    int r = 1000;
    for (int c = 1; c <= 997; c++)
    {
        for (int b = 1; b <= c; b++)
        {
            for (int a = 1; a <= b; a++)
            {
                if (a*a + b*b == c*c)
                {
                    if (a + b + c == r)
                    {
                        cout << a*b*c << endl;
                        return 0;
                    }
                }
            }
        }
    }
}
