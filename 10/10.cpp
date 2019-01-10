#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int a)
{
    if (a == 2)
        return true;

    int midpoint = ceil(sqrt(a));
    for (int i = 2; i <= midpoint; i++)
    {
        if (a % i == 0)
            return false;
    }

    return true;
}

int main()
{
    long long sum = 0;
    for (int i = 2; i < 2000000; i++)
    {
        if (isPrime(i))
            sum += i;
    }

    cout << sum << endl;
}
