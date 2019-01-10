#include <iostream>

using namespace std;

int factors(long long a)
{
    int n = 0;
    for (long long i = 1; i*i <= a; i++)
    {
        if (a % i == 0)
        {
            if (i*i < a)
                n += 2;
            else
                n++;
        }
    }

    return n;
}

int main()
{
    long long a = 1;
    long long b = 2;
    while(factors(a) <= 500)
    {
        a += b;
        b++;
    }

    cout << a << endl;
}
