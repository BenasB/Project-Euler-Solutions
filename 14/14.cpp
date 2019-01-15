#include <iostream>

using namespace std;

long long collatz(long long number, int &counter)
{
    counter++;

    if (number == 1)
        return counter;

    if (number % 2 == 0)
        return collatz(number/2, counter);
    else
        return collatz(3*number + 1, counter);
}

struct Chain
{
    int length;
    int number;

    bool operator>(Chain &other)
    {
        return length > other.length;
    }
};

int main()
{
    Chain largestChain;
    largestChain.number = -1;
    largestChain.length = 0;
    for (int i = 1; i < 1e6; i++)
    {
        Chain chain;
        chain.number = i;
        int counter = 0;
        chain.length = collatz(i, counter);

        if (chain > largestChain)
            largestChain = chain;
    }

    cout << largestChain.number << endl;
}
